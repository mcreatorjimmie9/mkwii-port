/* Function at 0x805DFF6C, size=20 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_805DFF6C(void)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x805DFF78
    FUN_805E3430(); // bl 0x805E3430
}