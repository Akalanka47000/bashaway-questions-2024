const fs = require('fs');
const axios = require('axios').default;
const { faker } = require('@faker-js/faker');
const exec = require('@sliit-foss/actions-exec-wrapper').default;

jest.setTimeout(15000)

const fallenKey = faker.string.alphanumeric(64);
const generalKey = faker.string.alphanumeric(64);

beforeAll(async () => {
    const generateService = (name, key) => {
        const server = `import 'package:angel_framework/angel_framework.dart';
import 'package:angel_framework/http.dart';
import 'dart:io' show Platform;

main() async {

    Map<String, String> cfg = Platform.environment;

    var app = Angel();

    app.get('/', (req, res) {
        res.write('${key}');
    });

    app.get('/system/info', (req, res) {
        res.write('You\\'ve reached the land of ${name} angels. System version: \${cfg['SERVICE_VERSION']}');
    });

    var http = AngelHttp(app);

    await http.startServer(cfg['SERVICE_HOST'], int.parse(cfg['SERVICE_PORT']!));
}`
        const pubspec = `name: ${name}
dependencies:
    angel_framework: ^2.0.0`

       

        fs.mkdirSync("./src/" + name, { recursive: true });

        fs.writeFileSync(`./src/${name}/main.dart`, server);

        fs.writeFileSync(`./src/${name}/pubspec.yaml`, pubspec);

    }

    if (fs.existsSync("./src")) {
        fs.rmdirSync("./src", { recursive: true });
    }

    generateService("fallen", fallenKey);
    generateService("general", generalKey);

});

test('should check if the requests are forwarded properly', async () => {
});
