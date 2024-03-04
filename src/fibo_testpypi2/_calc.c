#include <Python.h>

// Function to calculate the sum
static PyObject* calc_add(PyObject* self, PyObject* args) {
    long a, b;
    if (!PyArg_ParseTuple(args, "ll", &a, &b)) {
        return NULL; // If an error occurs during argument parsing
    }
    return PyLong_FromLong(a + b);
}

// Method definitions for this module
static PyMethodDef CalcMethods[] = {
    {"add", calc_add, METH_VARARGS, "Calculate the sum of two numbers."},
    {NULL, NULL, 0, NULL} // Sentinel
};

// Module definition
static struct PyModuleDef calcmodule = {
    PyModuleDef_HEAD_INIT,
    "calc", // name of module
    NULL, // module documentation, may be NULL
    -1,   // size of per-interpreter state of the module, or -1 if the module keeps state in global variables.
    CalcMethods
};

// Module initialization function
// must be the same as the imported name
PyMODINIT_FUNC PyInit__calc(void) {
    return PyModule_Create(&calcmodule);
}

