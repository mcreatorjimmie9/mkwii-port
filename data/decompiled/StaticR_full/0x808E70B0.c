/* Function at 0x808E70B0, size=120 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808E70B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808E70C4
    r31 = r31 + 0; // 0x808E70C8
    *(0x88 + r1) = r30; // stw @ 0x808E70CC
    r30 = r3;
    *(0x84 + r1) = r29; // stw @ 0x808E70D4
    if (==) goto 0x0x808e70f0;
    if (==) goto 0x0x808e7154;
    if (==) goto 0x0x808e7218;
    /* b 0x808e72ec */ // 0x808E70EC
    /* li r3, 0x174 */ // 0x808E70F0
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x808e710c;
    FUN_8066D278(r3); // bl 0x8066D278
    r29 = r3;
    r4 = *(0x654 + r30); // lwz @ 0x808E710C
    r3 = r30;
    r5 = r29;
    /* li r6, 0 */ // 0x808E7118
    r0 = r4 + 1; // 0x808E711C
    *(0x654 + r30) = r0; // stw @ 0x808E7120
    FUN_80671C2C(r3, r5, r6); // bl 0x80671C2C
}