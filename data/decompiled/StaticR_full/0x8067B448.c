/* Function at 0x8067B448, size=20 bytes */
/* Stack frame: 704 bytes */
/* Calls: 1 function(s) */

void FUN_8067B448(void)
{
    /* Stack frame: -704(r1) */
    *(0x2c4 + r1) = r0; // stw @ 0x8067B450
    FUN_805E3430(); // bl 0x805E3430
}