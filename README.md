# CodeAlpha_Login-and-Resgisration-System
# CodeAlpha Login and Registration System

## Overview

This project is a simple Login and Registration System developed in C++ as part of the CodeAlpha C++ Programming Internship.

The system allows users to register with a username and password, stores user credentials in files, and provides a secure login mechanism to verify user identity.

---

## Features

* User Registration
* User Login Authentication
* Username Availability Check
* File-Based Data Storage
* Password Verification
* User-Friendly Menu Interface

---

## Technologies Used

* C++
* File Handling
* Functions
* Conditional Statements
* Input Validation

---

## Project Objectives

The main objective of this project is to understand:

* User Authentication Systems
* File Handling in C++
* Data Storage and Retrieval
* Program Modularization
* Error Handling

---

## How It Works

### Registration Process

1. User selects the Registration option.
2. User enters a username and password.
3. The system checks whether the username already exists.
4. If the username is available, the credentials are stored in a file.
5. A success message is displayed.

### Login Process

1. User selects the Login option.
2. User enters their username and password.
3. The system reads the stored credentials.
4. If the entered information matches the stored data, login is successful.
5. Otherwise, an error message is displayed.

---

## Project Structure

```text
CodeAlpha_LoginSystem/
│
├── LoginRegistration.cpp
├── README.md
└── screenshots/
    ├── menu.png
    ├── registration.png
    ├── login_success.png
    └── login_failed.png
```

---

## How to Compile and Run

### Using g++

```bash
g++ LoginRegistration.cpp -o login
./login
```

### Using Visual Studio

1. Open the project in Visual Studio.
2. Build the solution.
3. Run the program.

---

## Sample Program Flow

### Main Menu

```text
===== MENU =====
1. Register
2. Login
3. Exit
Choice:
```

### Registration

```text
Enter Username: karin
Enter Password: 12345

Registration Successful!
```

### Successful Login

```text
Enter Username: karin
Enter Password: 12345

Login Successful!
```

### Failed Login

```text
Enter Username: karin
Enter Password: wrongpass

Invalid Password!
```

---

## Screenshots

### Main Menu

![Main Menu](screenshots/menu.png)

### Registration

![Registration](screenshots/registration.png)

### Successful Login

![Login Success](screenshots/login_success.png)

### Failed Login

![Login Failed](screenshots/login_failed.png)

---

## Future Improvements

* Password Encryption/Hashing
* Hidden Password Input
* Password Strength Validation
* Database Integration
* Forgot Password Feature
* Admin Panel

---

## Learning Outcomes

Through this project, I gained practical experience in:

* File Handling in C++
* User Authentication Systems
* Data Validation
* Program Design
* Debugging and Testing

---

## Author

Karin Zaki

CodeAlpha C++ Programming Internship
