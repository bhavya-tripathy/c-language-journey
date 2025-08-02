git pull origin main


## 📄 `c_keywords.md` — All 32 Keywords in C (With Meaning + Notes)

```markdown
# 📘 All 32 Keywords in C Language

C has 32 **reserved words**, called **keywords**, that have special meaning in the language.  
You cannot use them as variable names or identifiers.

---

## 🧠 The 32 Keywords in C

```

auto       double     int        struct
break      else       long       switch
case       enum       register   typedef
char       extern     return     union
const      float      short      unsigned
continue   for        signed     void
default    goto       sizeof     volatile
do         if         static     while

````

---

## 🔍 Keyword Table (with Description)

| Keyword     | Meaning / Use |
|-------------|----------------|
| `auto`      | Declares automatic (local) variables. Default for local variables. |
| `break`     | Exits from `switch` or loops early. |
| `case`      | Defines a value in `switch` statement. |
| `char`      | Declares a character variable. |
| `const`     | Declares a value as constant (read-only). |
| `continue`  | Skips the rest of current loop iteration. |
| `default`   | Executes if no `case` matches in `switch`. |
| `do`        | Used with `while` to make a `do-while` loop. |
| `double`    | Declares a double-precision floating-point variable. |
| `else`      | Executes if `if` condition is false. |
| `enum`      | Creates an enumeration (named integer constants). |
| `extern`    | Declares a variable defined in another file or scope. |
| `float`     | Declares a single-precision floating-point variable. |
| `for`       | Used for loop (entry-controlled). |
| `goto`      | Jumps to a labeled statement. (⚠️ Use is discouraged.) |
| `if`        | Executes code conditionally. |
| `int`       | Declares an integer variable. |
| `long`      | Declares a large-size integer variable. |
| `register`  | Suggests storing variable in a CPU register. |
| `return`    | Ends function and returns value. |
| `short`     | Declares a small-size integer variable. |
| `signed`    | Integer can be positive or negative (default). |
| `sizeof`    | Returns size (in bytes) of data types or variables. |
| `static`    | Keeps variable value even after function exits. |
| `struct`    | Groups different variables into a single data structure. |
| `switch`    | Selects one of many code blocks to execute. |
| `typedef`   | Creates a new name for a data type. |
| `union`     | Like `struct`, but shares memory among members. |
| `unsigned`  | Integer only stores positive numbers. |
| `void`      | Specifies no return type or no parameters. |
| `volatile`  | Tells compiler not to optimize this variable (it may change unexpectedly). |
| `while`     | Used for loop (entry-controlled). |

---

## 🧠 Helpful Tips to Remember

- `if`, `else`, `switch`, `case`, `break`, `default` — **Decision Making**
- `for`, `while`, `do`, `continue` — **Loops**
- `int`, `float`, `char`, `double`, `long`, `short`, `signed`, `unsigned` — **Data Types**
- `struct`, `union`, `enum`, `typedef` — **User-Defined Types**
- `static`, `extern`, `register`, `auto` — **Storage Classes**
- `return`, `goto`, `sizeof`, `void`, `const`, `volatile` — **Miscellaneous**

---

## 🔍 Example Usage (Quick Reference)

```c
int main() {
    int a = 10;         // int keyword
    float pi = 3.14f;   // float keyword
    const int x = 5;    // const - can't be changed
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        printf("%d ", i);
    }
    return 0;
}
````

---

## 📌 Note:

* C keywords are **case-sensitive**: `Int` ≠ `int`
* These **cannot** be used as variable names

---

## ✅ Goal:

🧠 **Be able to recognize all 32 keywords, know what category they fall in, and use them correctly in context.**

```

---

