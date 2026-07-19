/* Function at 0x80834C08, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80834C08(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80834C10
    *(0x14 + r1) = r0; // stw @ 0x80834C14
    *(0xc + r1) = r31; // stw @ 0x80834C18
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80834C20
    r4 = *(0xa + r31); // lha @ 0x80834C24
    r3 = *(0x74 + r3); // lwz @ 0x80834C28
    FUN_8071D034(); // bl 0x8071D034
    r3 = r31;
    FUN_80828E04(r3); // bl 0x80828E04
    r0 = *(0x14 + r1); // lwz @ 0x80834C38
    r31 = *(0xc + r1); // lwz @ 0x80834C3C
    return;
}