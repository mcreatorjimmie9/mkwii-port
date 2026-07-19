/* Function at 0x806C1CF0, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806C1CF0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C1CFC
    r31 = r3;
    r4 = *(0x350 + r3); // lwz @ 0x806C1D04
    r0 = r4 + -2; // 0x806C1D08
    if (<=) goto 0x0x806c1d50;
    if (==) goto 0x0x806c1d28;
    if (==) goto 0x0x806c1d3c;
    /* b 0x806c1d60 */ // 0x806C1D24
    /* li r4, 0x1006 */ // 0x806C1D28
    /* li r5, 0 */ // 0x806C1D2C
    r3 = r3 + 0x54; // 0x806C1D30
    FUN_806776B8(r4, r5, r3); // bl 0x806776B8
    /* b 0x806c1d60 */ // 0x806C1D38
    /* li r4, 0x100c */ // 0x806C1D3C
    /* li r5, 0 */ // 0x806C1D40
    r3 = r3 + 0x54; // 0x806C1D44
    FUN_806776B8(r4, r5, r3); // bl 0x806776B8
    /* b 0x806c1d60 */ // 0x806C1D4C
    /* li r4, 0x10cd */ // 0x806C1D50
    /* li r5, 0 */ // 0x806C1D54
    r3 = r3 + 0x54; // 0x806C1D58
    FUN_806776B8(r4, r5, r3); // bl 0x806776B8
    r3 = r31;
    FUN_80671C3C(r4, r5, r3, r3); // bl 0x80671C3C
    r0 = *(0x14 + r1); // lwz @ 0x806C1D68
    r31 = *(0xc + r1); // lwz @ 0x806C1D6C
    return;
}