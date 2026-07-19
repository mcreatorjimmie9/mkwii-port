/* Function at 0x80772058, size=72 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80772058(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x80772068
    r31 = r3;
    r5 = r31 + 0x10; // 0x80772070
    r7 = *(0 + r3); // lwz @ 0x80772074
    r6 = *(0x10 + r7); // lwz @ 0x8077207C
    r0 = *(0x14 + r7); // lwz @ 0x80772080
    *(0x24 + r1) = r0; // stw @ 0x80772084
    *(0x20 + r1) = r6; // stw @ 0x80772088
    r0 = *(0x18 + r7); // lwz @ 0x8077208C
    *(0x28 + r1) = r0; // stw @ 0x80772090
    FUN_805A4498(); // bl 0x805A4498
    FUN_805E3430(r3); // bl 0x805E3430
}