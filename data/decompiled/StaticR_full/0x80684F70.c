/* Function at 0x80684F70, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80684F70(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80684F80
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80684F88
    r30 = r3;
    if (==) goto 0x0x80684fd0;
    r3 = *(0x3e4 + r3); // lwz @ 0x80684F94
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x400 + r30); // lwz @ 0x80684F9C
    /* li r4, 1 */ // 0x80684FA0
    FUN_806702E8(r4); // bl 0x806702E8
    r3 = *(0x404 + r30); // lwz @ 0x80684FA8
    /* li r4, 1 */ // 0x80684FAC
    FUN_80658FC4(r4, r4); // bl 0x80658FC4
    r3 = r30 + 0x390; // 0x80684FB4
}