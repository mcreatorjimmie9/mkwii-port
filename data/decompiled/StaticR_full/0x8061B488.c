/* Function at 0x8061B488, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8061B488(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r4;
    *(0x14 + r1) = r0; // stw @ 0x8061B494
    *(0xc + r1) = r31; // stw @ 0x8061B498
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    r31 = r3;
    FUN_80857008(r3); // bl 0x80857008
    r3 = *(0xc + r31); // lwz @ 0x8061B4A8
    /* li r4, 0xc */ // 0x8061B4AC
    FUN_808F5188(r4); // bl 0x808F5188
    r0 = *(0x14 + r1); // lwz @ 0x8061B4B4
    r31 = *(0xc + r1); // lwz @ 0x8061B4B8
    return;
}