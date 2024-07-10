const fs = require('fs');
const exec = require('@sliit-foss/actions-exec-wrapper').default;
const { faker } = require('@faker-js/faker');

jest.setTimeout(25000);

test('should migrate the data from the sql file to a mongodb database', async () => {
    if (fs.existsSync('./src')) {
        fs.rmdirSync('./src', { recursive: true });
    }
    fs.mkdirSync('./src');
    const database = faker.vehicle.model()?.split(' ')?.[0]?.toLowerCase();
    const table = faker.lorem.word();
    const columns = new Set();
    for (let i = 0; i < faker.datatype.number({ min: 3, max: 15 }); i++) {
        columns.add(faker.database.column());
    }
    const rows = faker.datatype.number({ min: 10, max: 10 });
    const data = Array.from({ length: rows }, () => {
        return Array.from(columns).reduce((acc, column) => {
            acc[column] = faker.datatype.number({ min: 0, max: 100 });
            return acc;
        }, {});
    });
    const sql = `CREATE DATABASE ${database};
    USE ${database};
    CREATE TABLE ${table} (${Array.from(columns).join(', ')});
    INSERT INTO ${table} VALUES ${data.map(row => `(${Object.values(row).join(', ')})`).join(', ')};
    `;
    fs.writeFileSync('./src/scroll.sql', sql);
    await exec('bash execute.sh');
});