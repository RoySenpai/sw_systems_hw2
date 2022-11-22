# Software Systems Course Assignment 2
### For Computer Science B.Sc Ariel University

**By Roy Simanovich and Dana Sharper**

## Description
This small C programs do some calculations on an undirected graph,
which is represented by a square matrix.

**Neighborhood matrix** is a method for representing a directed or undirected graph
with N nodes (vertices), using a square matrix whose size is NxN and whose cell values
​​are 0 or a positive number. Cell (i,j) in the graph describes the weight of the arc
from vertex i to vertex j in the graph. If there is no such arc, the value in the cell
in the matrix will be 0. If there is such an arc, the value will be a positive number
and it will represent the weight of the transition from vertex i to vertex j.

### User inputs
* **A** – The user inputs the values of the presented matrix whose size is 10x10.
* **B** – The user inputs the values of i and j vertices and the program check if there is an arc between them.
* **C** – The user inputs the values of i and j vertices and the program returns the shortest path from i to j, if exists. If not, it will print -1.
* **D** – Exits the program.

## Requirements
* Linux machine
* gcc

## Building
```
# Cloning the repo to local machine
git clone https://github.com/RoySenpai/sw_systems_hw2.git

# Building all the necessary files & the main programs
make all
```

## Running
```
# Runs the program.
./connections
```
