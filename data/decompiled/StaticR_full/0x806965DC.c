/* Function at 0x806965DC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806965DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806965EC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806965F4
    r30 = r3;
    if (==) goto 0x0x8069662c;
    if (==) goto 0x0x8069661c;
    /* li r4, -1 */ // 0x80696604
    r3 = r3 + 0x11c; // 0x80696608
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x80696614
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8069662c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80696630
    r30 = *(8 + r1); // lwz @ 0x80696634
    r0 = *(0x14 + r1); // lwz @ 0x80696638
    return;
}