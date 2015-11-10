#Cork
Personal to-do list application

##Organization
Cork is used to organize *tasks*, which are organized into one of three lists:
- Today
- Tomorrow
- Backlog

Tasks are moved from Tomorrow to Today automatically.

Completed tasks are stored in an Archive for record.

Tasks are treated as objects containing several elements:
- ID, a numerical identifier, unique to this task
- Description, a string containing the actual action
- Tags, denoted by hashtags (i.e. `#awesomeProject` or `#sprint4`).
- List, which identifies which list this task is on

##Usage
The following commands are supported:
- `cork "task"` adds a new task to the backlog
  - `cork add -t "task"` adds a new task to today (also, `-m` for tomorrow and `-b` for backlog)
  - `cork add "task" #tag1 #tag2` adds a new task with the tags `#tag1` and `#tag2` to the backlog
- `cork list` shows all tasks (ID, description, tags) on all three lists
  - `cork list -t` shows all tasks on Today's list
  - `cork list #tag1` shows all tasks on any list with the tag `#tag1`
- `cork mod <id> "string"` alters that task's description field
  - `cork mod <id> -a #tag1` adds `#tag1` to that task
  - `cork mod <id> -d #tag1` deletes `#tag1` from that task
- `cork done <id>` marks a task as complete.
