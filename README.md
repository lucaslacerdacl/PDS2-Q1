# List of exercises 1
> Fix given functions.

### Contributors

* Lucas Leandro Costa Lacerda


## Developing

### Built With
 - iostream


### How it was fixed
 * In the first line remove `.h` suffix.
 * Swap function:
    * Add `&` operator in the parameters to change by reference.
 * Selection Sort function:
    * Remove `const` from the array because change the values.
    * Change `++i` to `i++`.
    * Remove `min_index` from the `for` because it will not change inside the execute condition. Also removed from receive the `j` parameter because the `min_index` has to be the first value.
    * Change `j` variable to `validate_min_index`.
    * Indent the code to `swap` be inside of `if` scope.
    * Pass the array value instead the position in `swap` function.
 * Print Array function:
    * Remove `&` operator because will not be changed.
    * Change ',' to ';' inside the for.
    * Change how the array iterate.
    * Add `std::` before using output methods.
 * Main:
    * Pass the array size as parameter instead the value.

## Licensing

Released under the MIT license.