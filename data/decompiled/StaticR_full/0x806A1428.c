/* Function at 0x806A1428, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806A1428(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A1438
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A1440
    r30 = r3;
    if (==) goto 0x0x806a14a4;
    if (==) goto 0x0x806a1494;
    /* li r4, -1 */ // 0x806A1450
    r3 = r3 + 0x158; // 0x806A1454
    FUN_8066C30C(r4, r3); // bl 0x8066C30C
    r3 = r30 + 0x144; // 0x806A145C
    /* li r4, -1 */ // 0x806A1460
    FUN_8066C30C(r4, r3, r3, r4); // bl 0x8066C30C
    r3 = r30 + 0xa8; // 0x806A1468
    /* li r4, -1 */ // 0x806A146C
    FUN_80665FE4(r3, r4, r3, r4); // bl 0x80665FE4
    r3 = r30 + 0x98; // 0x806A1474
    /* li r4, -1 */ // 0x806A1478
    FUN_8069F084(r3, r4, r3, r4); // bl 0x8069F084
    if (==) goto 0x0x806a1494;
    r3 = r30 + 0x68; // 0x806A1488
    /* li r4, -1 */ // 0x806A148C
    FUN_8064DB0C(r3, r4); // bl 0x8064DB0C
    if (<=) goto 0x0x806a14a4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A14A8
    r30 = *(8 + r1); // lwz @ 0x806A14AC
    r0 = *(0x14 + r1); // lwz @ 0x806A14B0
    return;
}