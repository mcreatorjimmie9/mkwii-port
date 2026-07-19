/* Function at 0x80629938, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80629938(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80629940
    r5 = r5 + 0; // 0x80629948
    *(0xc + r1) = r31; // stw @ 0x8062994C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80629954
    r30 = r3;
    *(0 + r3) = r5; // stw @ 0x8062995C
    r3 = r3 + 0x9c; // 0x80629960
    FUN_805E3430(r3); // bl 0x805E3430
}