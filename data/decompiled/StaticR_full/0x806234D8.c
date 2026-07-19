/* Function at 0x806234D8, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806234D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806234E4
    r31 = r4;
    r3 = *(0x18 + r3); // lwz @ 0x806234EC
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lis r4, 0 */ // 0x806234F4
    /* slwi r0, r31, 3 */ // 0x806234F8
    r4 = r4 + 0; // 0x806234FC
    r4 = r4 + r0; // 0x80623500
    r4 = *(4 + r4); // lha @ 0x80623504
    FUN_8060F968(r4, r4); // bl 0x8060F968
    r0 = *(0x14 + r1); // lwz @ 0x8062350C
    r31 = *(0xc + r1); // lwz @ 0x80623510
    return;
}