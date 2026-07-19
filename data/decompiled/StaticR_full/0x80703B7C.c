/* Function at 0x80703B7C, size=56 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80703B7C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x80703B88
    r31 = r3;
    r0 = *(0 + r3); // lwz @ 0x80703B90
    if (!=) goto 0x0x80703ca8;
    FUN_805E3430(); // bl 0x805E3430
    r6 = *(0xa4 + r31); // lwz @ 0x80703BA0
    /* li r0, 0 */ // 0x80703BA4
    r7 = *(0xa0 + r31); // lwz @ 0x80703BA8
    /* li r5, 0x1e */ // 0x80703BAC
    /* subfc r6, r6, r4 */ // 0x80703BB0
}