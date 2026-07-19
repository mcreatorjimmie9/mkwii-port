/* Function at 0x8074775C, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8074775C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x8074776C
    r30 = r3;
    /* li r3, 0x6c */ // 0x80747774
    FUN_805E3430(r3); // bl 0x805E3430
}