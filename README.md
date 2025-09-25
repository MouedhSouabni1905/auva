# Description
Organize tasks, projects and goals into lists
(Work in Progress)

# Documentation
## Usage
`eggle COMMAND [options] ARGUMENT [arguments ...]`

## Commands
- `showlists` or `sl` : show all of your created lists
- `newlist` or `nl` : arguments are the name of the list then its type (separated by spaces only), if arguments are wrong or missing prints error message.
- `dellist` or `dl` : arguments are the list(s) to be deleted, if none are provided provided then the command does nothing, if the list was referenced elsewhere then that is deleted automatically
- `addtolist` or `al` : arguments are the name of the list to add to, then a string describing the element, then its type, then the id of the element or list it references
- `remfromlist` or `rl` : arguments are the name of the list and id to remove the element only from that list, id only to remove it from everywhere
- `printlist` or `pl` : arguments are the name of the list (options)
- `printall` or `pa` : prints all lists (options)
- `checkel` or `c` : argument is the id of the element, if an element is checked it is categorized as checked in all other lists and its sub-elements as well, and it is explicited when printing
- `help` or `h` : show this guide

## Options
`printlist -[options...]`:
- `c` : with colors
- `r` : with references (as in, when an element references a list)
- `i` : with the id next to the name
- `printall` : same options as printlist
**Using `ri` options together replaces the name of the referenced list by its id and doesn't print both.**

## Model
- A list is identified by a unique name (scope = global).
- An element is identified by a unique number (scope = global).
- An element in a list is described by a string, can be a simple word or sentence (scope = list).
- An element in the list can reference another list but not another element (scope = global).
- A list has a specific type.
- An element has a specific type.
- Types are: goal, project, task.
- A list of type goal can only contain elements of types: goal, project, task.
- A list of type project can only contain elements of types: project, task.
- A list of type task can only contain elements of type: task.

## Examples
For multiple lists or elements at once, they should be separated by commas and no spaces, the types can be different as well but will be taken respectively and expanded or ignored accordingly (except reference ids which, which can be ommited for a precise position by leaving a ,, instead). Multiple word strings have to be enclosed between " " or ' '.

**Example commands:**
- `eggle nl groceries,assignments task` : creates two lists of type task
- `eggle nl chores,webapp,cliapp task,project` : chores will be a list of type task and webapp and cliapp will both be of type project
- `eggle nl chores,webapp task,project,goal`  : chores will be of type task, webapp will be of type project, and the type goal will be ignored

- These apply similarly to adding new elements.
- Deleting and checking elements/lists does not require a type so applying the command to multiple ones needs only the comma separation.
- Pay attention to what you're deleting because anything that references a list is deleted with it. You can avoid adding references and rely on your strings to recognize then instead. The id option is to help recognize them in case the referencing/referenced strings are different, so you might not need it.
