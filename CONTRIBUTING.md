# Contribution documentation
Thank you for your interest in contributing to our project!.
This guide will help you understand our conventions for 
writing commit messages, naming stuffs, ensuring a consistent and efficient workflow

By following these guidelines, you'll help maintain a clear and organized project history. Thank you for contributing!

For any questions or further assistance, feel free to reach out to the project maintainers.

## How is the contribution made?
 If you want to contribute to the project, please first check if your work is already
 [issue](https://github.com/saracalihan/teriminal.h/issues "click to view issues").
 If **issue** If there is a problem and there is someone assigned to it,
 contact that person. If there is no issue, you can forward your development
 to the project authorities by opening **pull request** and marking the **[ready for review](https://github.com/saracalihan/teriminal.h/labels)** label.

The name and description of the **pull request** you have opened should be related to
the development you have made. You should add a screenshot in the interface changes
you have made. If you have made operational changes, you should explain them in an
explanatory way.

## Naming

Patterns to be used for nomenclature should be as follows:
* **Struct and Type**: PascalCase
* **Global variable**, **constant**, **macro**: MACRO_CASE
* **function** and **variable**: snake_case
* **file**: kebab-case

If a function performs a specific operation for a specific type or stract, its naming should be as follows:

`<type name>_<func name>`

For example:

```c
User user_create(char* name);
bool user_is_admin(User &u);
Variable Variable_multiply(Variable a, Variable b);
```

This styling improve readability and searching.

## Commit Message

When writing commit messages, please use the following format:

1. **Prefix**: Begin with one of the predefined keywords, followed by a colon (`:`).
2. **Short Description**: Provide a concise summary of the change in a single line.
3. **Detailed Description**: Optionally, add a more detailed description on a new line, explaining what the change does and why it was made.

### Commit Message Prefixes

- `feat`: A new feature
- `fix`: A bug fix
- `docs`: Documentation only changes
- `style`: Changes that do not affect the meaning of the code (white-space, formatting, missing semi-colons, etc.)
- `refactor`: A code change that neither fixes a bug nor adds a feature
- `perf`: A code change that improves performance
- `test`: Adding missing tests or correcting existing tests
- `chore`: Changes to the build process or auxiliary tools and libraries such as documentation generation

#### Examples

```
feat: add user login functionality

This commit adds a login form to the homepage and validates user credentials against the database.
```

```
docs: correct typo in README

Fixed a small typo in the installation instructions of the README file.
```

## Branch Naming Conventions

When creating branches, use the following conventions to ensure clarity and traceability:

1. **Prefix**: Begin with one of the predefined keywords.
2. **Issue Number**: If the branch is related to a GitHub issue, include the issue number after a hyphen (`-`).
3. **Description**: Use a brief description of the change, with words separated by hyphens (`-`).

### Branch Prefixes

- `feat`: A new feature
- `fix`: A bug fix
- `docs`: Documentation updates
- `style`: Code style updates
- `refactor`: Code refactoring
- `perf`: Performance improvements
- `test`: Test updates
- `chore`: Build process or auxiliary tool updates

#### Examples

- For a new feature related to issue #42:
  ```
  feat-42/add-user-login
  ```

- For a documentation update not related to any issue:
  ```
  docs/update-readme
  ```
