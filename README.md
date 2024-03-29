# Student Data Base using C

Welcome to the Student Data Base project repository. This project aims to create a simple database module, "SimpleDb," that can store information about students, their years, and their grades for up to 3 courses. The database has a maximum size of 10 entries.

## Database Parameters

1. Student ID
2. Student Year
3. Course 1 ID
4. Course 1 Grade
5. Course 2 ID
6. Course 2 Grade
7. Course 3 ID
8. Course 3 Grade

## Project Structure

The project is organized into the following files and directories:

- `main.c`: The main C program that demonstrates how to use the SimpleDb module.
- `include/student_db.h`: The header file containing function prototypes and data structures.
- `src/student_db.c`: The C file containing the implementation of the SimpleDb module functions.

## Module Interfaces

The following interfaces are provided by the "SimpleDb" module:

1. **`bool SDB_IsFull(void)`**

   - **Description**: Check if the database is full.
   - **Return Value**: Returns 1 if the database is full; otherwise, returns 0.

2. **`uint8 SDB_GetUsedSize(void)`**

   - **Description**: Get the number of entries in the database.
   - **Return**: Returns the number of entries in the database.

3. **`bool SDB_AddEntry(uint8 id, uint8 year, uint8* subjects, uint8* grades)`**

   - **Description**: Add a new entry to the database.
   - **Return**: Returns 1 if the new entry is successfully added; otherwise, returns 0.
   - **Input Parameters**:
     - `id`: Student ID
     - `year`: Student Year
     - `subjects`: Pointer to 3 subject IDs (each subject ID is a uint8 value)
     - `grades`: Pointer to 3 grades (each grade is a uint8 value)
   - The allowed range for the grade is only from 0 to 100.
   - Assumes that the caller will always provide 3 subjects with their corresponding grades.

4. **`void SDB_DeleteEntry(uint8 id)`**

   - **Description**: Delete the entry with the given ID.
   - **Input Parameter**:
     - `id`: ID of the entry to be deleted.

5. **`bool SDB_ReadEntry(uint8 id, uint8* year, uint8* subjects, uint8* grades)`**

   - **Description**: Read an entry matching the provided ID.
   - **Return Value**: Returns 1 if the entry exists; otherwise, returns 0.
   - **Input Parameter**:
     - `id`: Student ID
   - **Output Parameters**:
     - `year`: Pointer to the student year
     - `subjects`: Pointer to the subjects
     - `grades`: Pointer to the grades

6. **`void SDB_GetIdList(uint8* count, uint8* list)`**

   - **Description**: Get the list of IDs of the students.
   - **Output Parameters**:
     - `count`: Pointer to the number of entries currently existing in the database.
     - `list`: Pointer to the list of IDs.

7. **`bool SDB_IsIdExist(uint8 ID)`**

   - **Description**: Checks if the provided student ID exists.
   - **Return Value**: Returns 1 if the ID exists in the database; otherwise, returns 0.

## Getting Started with Code::Blocks IDE

To use the "SimpleDb" module in your C project with Code::Blocks IDE, follow these steps:

1. Open Code::Blocks IDE on your system.

2. Create a new project or open an existing one where you want to use the "SimpleDb" module.

3. Add the following files to your project:
   - `include/student_db.h`
   - `src/student_db.c`
   - `main.c` (or your own main source file)

4. Configure your project settings to include the necessary header and source files.

5. Build and run your project within Code::Blocks to test the SimpleDb module's functionality.

## Contribution

This project is open-source and welcomes contributions. If you have ideas for enhancements, bug fixes, or additional features, feel free to fork this repository, make your changes, and submit a pull request.

## License

This project is open-source and available under the [MIT License](LICENSE). You are free to use, modify, and distribute this codebase as needed.

Thank you for exploring the Student Data Base project. Happy coding!
