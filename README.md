# react-native-official-template-proposal-module

This is a test library to demonstrate the structure of native modules.

## How to test and develop locally?

To test and develop the library locally, you need to build the example app on Android and iOS. Any changes you make on the library will be reflected to the example app.

### Android

1. Open `Android Studio`
2. Pick `official-template-proposal-module/example/android`.
3. Wait until gradle sync finishes.
4. Open the `Project` pane, switch to `Android`, and pick `react-native-official-template-proposal-module`.
5. Run the app on debug mode.
6. Any change you make will be reflected to the library and the example app.

### iOS

1. Make sure you install the pods on the example project.
2. Open `XCode`.
3. Pick `official-template-proposal-module/example/ios/OfficialTemplateProposalModuleExample.xcworkspace`.
4. On the file browser, go to `Pods > Development Pods > react-native-official-template-proposal-module`.
5. Run the app on debug mode.
6. Any change you make will be reflected to the library and the example app.

## Installation

```sh
npm install react-native-official-template-proposal-module
```

## Usage

```js
import { multiply } from 'react-native-official-template-proposal-module';

// ...

const result = await multiply(3, 7);
```

## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
