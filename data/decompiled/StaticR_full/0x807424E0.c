/* Function at 0x807424E0, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807424E0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x807424F0
    r30 = r3;
    /* li r3, 0x4c */ // 0x807424F8
    FUN_805E3430(r3); // bl 0x805E3430
}