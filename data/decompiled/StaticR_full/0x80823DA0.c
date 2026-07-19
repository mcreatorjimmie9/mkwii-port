/* Function at 0x80823DA0, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80823DA0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x80823DB0
    *(0x18 + r1) = r30; // stw @ 0x80823DB4
    r30 = r3;
    r3 = r3 + 0x44; // 0x80823DBC
    FUN_8083DFBC(r5, r3); // bl 0x8083DFBC
    if (==) goto 0x0x80823e30;
    r4 = *(8 + r1); // lbz @ 0x80823DCC
    r3 = r30 + 0x44; // 0x80823DD0
    /* li r5, 1 */ // 0x80823DD4
    FUN_8083F014(r3, r5); // bl 0x8083F014
    r0 = *(0x44 + r30); // lbz @ 0x80823DDC
    if (==) goto 0x0x80823e30;
    r3 = r30;
    FUN_8061DA88(r3); // bl 0x8061DA88
    r31 = r3;
    r3 = r30 + 0x44; // 0x80823DF4
    r4 = r31;
    FUN_8083E0DC(r3, r3, r4); // bl 0x8083E0DC
    r4 = r31;
    r3 = r30 + 0x48; // 0x80823E04
}