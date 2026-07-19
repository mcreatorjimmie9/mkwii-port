/* Function at 0x80653910, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80653910(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80653918
    *(0x14 + r1) = r0; // stw @ 0x8065391C
    *(0xc + r1) = r31; // stw @ 0x80653920
    r31 = r3;
    FUN_80671C1C(r4); // bl 0x80671C1C
    r12 = *(0x44 + r31); // lwz @ 0x8065392C
    r3 = r31 + 0x44; // 0x80653930
    /* li r4, 0 */ // 0x80653934
    /* li r5, 0 */ // 0x80653938
    r12 = *(0x10 + r12); // lwz @ 0x8065393C
    /* mtctr r12 */ // 0x80653940
    /* bctrl  */ // 0x80653944
    r3 = r31;
    r4 = r31 + 0x44; // 0x8065394C
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x80653958
    /* li r5, 0 */ // 0x8065395C
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x80653964
    r31 = *(0xc + r1); // lwz @ 0x80653968
    return;
}