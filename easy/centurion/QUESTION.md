# Centurion

In the disciplined realm of ancient Rome, where order and efficiency are paramount, a task has emerged within the empire's digital repository. Craft a script that, when given a name as an argument, will seek out and eliminate all git branches starting with that name. Execute this with the precision of a Roman centurion, maintaining the repository’s order and integrity.

## Example

```bash
$ ./execute.sh refactor
```

## Constraints

- The script must be **purely written in bash within the execute.sh file**

## Output / Evaluation Criteria

- All git branches starting with the given name must be deleted from a repository when the script is executed

- Nothing should happen if no input branch name is provided