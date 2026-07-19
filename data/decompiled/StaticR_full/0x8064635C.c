/* Function at 0x8064635C, size=376 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8064635C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80646364
    *(0xc + r1) = r31; // stw @ 0x8064636C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80646374
    r30 = r4;
    r3 = *(0 + r5); // lwz @ 0x8064637C
    FUN_805A4968(); // bl 0x805A4968
    r3 = *(0 + r3); // lwz @ 0x80646384
    /* li r0, 0 */ // 0x80646388
    r3 = *(0x10 + r3); // lha @ 0x8064638C
    *(0x44 + r31) = r0; // stw @ 0x80646394
    if (==) goto 0x0x806463b0;
    if (==) goto 0x0x806463bc;
    if (==) goto 0x0x806463c8;
    /* b 0x806463d0 */ // 0x806463AC
    r0 = r0 | 1; // 0x806463B0
    *(0x44 + r31) = r0; // stw @ 0x806463B4
    /* b 0x806463d0 */ // 0x806463B8
    r0 = r0 | 2; // 0x806463BC
    *(0x44 + r31) = r0; // stw @ 0x806463C0
    /* b 0x806463d0 */ // 0x806463C4
    r0 = r0 | 4; // 0x806463C8
    *(0x44 + r31) = r0; // stw @ 0x806463CC
    /* lis r3, 0 */ // 0x806463D0
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806463D8
    FUN_805A4968(r3, r4); // bl 0x805A4968
    r3 = *(0 + r3); // lwz @ 0x806463E0
    r0 = *(0x12 + r3); // lha @ 0x806463E4
    if (<=) goto 0x0x806464bc;
    /* lis r3, 0x6666 */ // 0x806463F0
    r3 = r3 + 0x6667; // 0x806463F4
    /* mulhw r3, r3, r0 */ // 0x806463F8
    r3 = r3 >> 2; // srawi
    /* srwi r4, r3, 0x1f */ // 0x80646400
    r3 = r3 + r4; // 0x80646404
    /* mulli r3, r3, 0xa */ // 0x80646408
    /* subf r3, r3, r0 */ // 0x8064640C
    if (!=) goto 0x0x80646424;
    r3 = *(0x44 + r31); // lwz @ 0x80646418
    r3 = r3 | 8; // 0x8064641C
    *(0x44 + r31) = r3; // stw @ 0x80646420
    /* lis r4, 0x51ec */ // 0x80646424
    /* lis r3, 0x6666 */ // 0x80646428
    r4 = r4 + -0x7ae1; // 0x8064642C
    /* mulhw r4, r4, r0 */ // 0x80646430
    r5 = r3 + 0x6667; // 0x80646434
    r3 = r4 >> 5; // srawi
    /* srwi r4, r3, 0x1f */ // 0x8064643C
    r3 = r3 + r4; // 0x80646440
    /* mulli r3, r3, 0x64 */ // 0x80646444
    /* subf r3, r3, r0 */ // 0x80646448
    /* mulhw r3, r5, r3 */ // 0x8064644C
    r3 = r3 >> 2; // srawi
    /* srwi r4, r3, 0x1f */ // 0x80646454
    r3 = r3 + r4; // 0x80646458
    if (!=) goto 0x0x80646470;
    r3 = *(0x44 + r31); // lwz @ 0x80646464
    r3 = r3 | 0x10; // 0x80646468
    *(0x44 + r31) = r3; // stw @ 0x8064646C
    /* lis r4, 0x1062 */ // 0x80646470
    /* lis r3, 0x51ec */ // 0x80646474
    r4 = r4 + 0x4dd3; // 0x80646478
    /* mulhw r4, r4, r0 */ // 0x8064647C
    r5 = r3 + -0x7ae1; // 0x80646480
    r3 = r4 >> 6; // srawi
    /* srwi r4, r3, 0x1f */ // 0x80646488
    r3 = r3 + r4; // 0x8064648C
    /* mulli r3, r3, 0x3e8 */ // 0x80646490
    /* subf r0, r3, r0 */ // 0x80646494
    /* mulhw r0, r5, r0 */ // 0x80646498
    r0 = r0 >> 5; // srawi
    /* srwi r3, r0, 0x1f */ // 0x806464A0
    r0 = r0 + r3; // 0x806464A4
    if (!=) goto 0x0x806464bc;
    r0 = *(0x44 + r31); // lwz @ 0x806464B0
    r0 = r0 | 0x20; // 0x806464B4
    *(0x44 + r31) = r0; // stw @ 0x806464B8
    r0 = *(0x14 + r1); // lwz @ 0x806464BC
    r31 = *(0xc + r1); // lwz @ 0x806464C0
    r30 = *(8 + r1); // lwz @ 0x806464C4
    return;
}