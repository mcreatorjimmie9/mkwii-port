/* Function at 0x80881078, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80881078(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80881084
    /* li r31, 1 */ // 0x80881088
    r0 = *(0x198 + r3); // lbz @ 0x8088108C
    if (==) goto 0x0x808810b4;
    /* li r4, 0 */ // 0x80881098
    r3 = r3 + 0x98; // 0x8088109C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x808810A4
    if (==) goto 0x0x808810b4;
    /* li r31, 0 */ // 0x808810B0
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x808810B8
    r0 = *(0x14 + r1); // lwz @ 0x808810BC
    return;
}