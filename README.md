# 🚀 simple data analysis

## 📌 Description

This project is an extended version of the 42 **Push Swap** project, developed by **Ahmad Momani**.

It focuses not only on sorting a list of integers using two stacks (**a** and **b**) with a limited set of operations, but also on **analyzing the input data statistically** to better understand its distribution.

The goal is to:

* Sort efficiently with minimal operations
* Analyze the dataset using statistical methods

---

## 🧠 Project Focus

This project combines:

* Algorithmic thinking
* Optimization
* Data structures (linked lists / stacks)
* Complexity analysis
* 📊 **Statistical analysis of input data**

---

## ⚙️ Instructions

### 🔨 Compilation

```bash
make
```

### ▶️ Execution

```bash
./push_swap [numbers...]
```

### Examples

```bash
./push_swap 3 2 1
./push_swap "3 2 1"
./push_swap "1 2" 3
```

---

## 📊 Statistics Mode

The program includes a statistical analysis module that evaluates the input dataset before sorting.

### Displays:

* Mean (average)
* Median
* Q1 (first quartile)
* Q3 (third quartile)
* IQR (interquartile range)
* Range
* Outliers (based on IQR method)

### Example Output

```bash
📊 Statistics:
Mean: 251.25
Median: 2.50
Q1: 1.50
Q3: 501.00
IQR: 499.50
Range: 998
Outliers: 1
```

---

## 🧠 Algorithm Choices

This implementation uses multiple sorting strategies:

### 🔹 Simple Sort — O(n²)

Used for:

* Small datasets (≤ 5 elements)

### 🔹 Medium Sort

Used for:

* Moderate input sizes

### 🔹 Complex Sort (Radix-based)

Used for:

* Large datasets
* Efficient handling of wide value ranges

---

## 📊 Strategy Selection

Strategy is selected based on input disorder:

| Disorder | Strategy |
| -------- | -------- |
| < 20%    | Simple   |
| < 50%    | Medium   |
| ≥ 50%    | Complex  |

---

## 📈 Performance

| Input Size | Operations |
| ---------- | ---------- |
| 100        | ~555       |
| 500        | ~5380      |

---

## 🛡️ Error Handling

The program handles:

* Invalid characters
* Overflow / underflow
* Duplicate numbers
* Empty input
* Incorrect formatting

### Output

```bash
Error
```

---

## 🛠️ Allowed Operations

### Stack A → B

* `pb`

### Stack B → A

* `pa`

### Swap

* `sa`
* `sb`
* `ss`

### Rotate

* `ra`
* `rb`
* `rr`

### Reverse Rotate

* `rra`
* `rrb`
* `rrr`

---

## 📚 Concepts Used

* Radix Sort
* Stack data structures
* Linked lists
* Statistical measures (Mean, Median, IQR)
* Data distribution analysis

---

## 👨‍💻 Author

* Ahmad Momani

