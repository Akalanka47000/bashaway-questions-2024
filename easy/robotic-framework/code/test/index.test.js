const fs = require('fs');
const { faker } = require('@faker-js/faker');
const { scan, shellFiles, dependencyCount, prohibitedCommands, restrictJavascript, restrictPython } = require('@sliit-foss/bashaway');

jest.setTimeout(60000);

test('should validate if only bash files are present', () => {
    const shellFileCount = shellFiles().length;
    expect(shellFileCount).toBe(1);
    expect(shellFileCount).toBe(scan('**', ['src/**']).length);
});

describe('should check installed dependencies', () => {
    let script
    beforeAll(() => {
        script = fs.readFileSync('./execute.sh', 'utf-8')
    });
    test("javacript should not be used", () => {
        restrictJavascript(script)
    });
    test("python should not be used", () => {
        restrictPython(script)
    });
    test("no additional npm dependencies should be installed", async () => {
        await expect(dependencyCount()).resolves.toStrictEqual(3)
        expect(script).not.toMatch(prohibitedCommands);
    })
});

test('should check if numbers are generated correctly', async () => {
    let lastRecordedCount = 0;
    for (let i = 0; i <  faker.number.int({ min: 5, max: 15 }); i++) {
        await new Promise((resolve) => setTimeout(resolve, 1050));
        const fileContent = fs.readFileSync('./out/numbers.txt', 'utf-8');
        const numberCount = fileContent.split('\n').length - 1;
        expect(numberCount).toBeGreaterThan(i);
        expect(numberCount).toBeGreaterThan(lastRecordedCount);
        lastRecordedCount = numberCount;
    }
});