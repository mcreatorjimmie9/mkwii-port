/* Function at 0x8070D30C, size=20 bytes */
/* Stack frame: 256 bytes */
/* Calls: 1 function(s) */

void FUN_8070D30C(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x8070D314
    FUN_805E3430(); // bl 0x805E3430
}