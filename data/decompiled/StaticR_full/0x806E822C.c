/* Function at 0x806E822C, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E822C(int r3, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x24 + r1) = r0; // stw @ 0x806E8238
    *(0x1c + r1) = r31; // stw @ 0x806E823C
    r31 = r5;
    if (!=) goto 0x0x806e831c;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x806e828c;
    r3 = r31 + 8; // 0x806E8254
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x2c + r31); // lwz @ 0x806E825C
}