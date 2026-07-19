/* Function at 0x80620908, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80620908(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8062091C
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x80620928
    /* li r0, 0 */ // 0x8062092C
    r3 = r3 + 0; // 0x80620930
    *(0xc + r30) = r3; // stw @ 0x80620934
    r3 = r30;
    *(0x10 + r30) = r0; // sth @ 0x8062093C
    *(0x14 + r30) = r0; // stw @ 0x80620940
    *(0x18 + r30) = r31; // stw @ 0x80620944
    r31 = *(0xc + r1); // lwz @ 0x80620948
    r30 = *(8 + r1); // lwz @ 0x8062094C
    r0 = *(0x14 + r1); // lwz @ 0x80620950
    return;
}