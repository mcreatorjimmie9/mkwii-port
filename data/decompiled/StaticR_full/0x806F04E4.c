/* Function at 0x806F04E4, size=356 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F04E4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x806F04F0
    *(0xc + r1) = r31; // stw @ 0x806F04F4
    r31 = r3;
    if (==) goto 0x0x806f0630;
    /* lis r5, 0 */ // 0x806F0500
    /* li r0, 2 */ // 0x806F0504
    r7 = *(0 + r5); // lwz @ 0x806F0508
    /* li r8, 0 */ // 0x806F050C
    /* li r9, 0 */ // 0x806F0510
    r5 = *(0x291c + r7); // lwz @ 0x806F0514
    /* mulli r5, r5, 0x58 */ // 0x806F0518
    r5 = r7 + r5; // 0x806F051C
    r6 = *(0x59 + r5); // lbz @ 0x806F0520
    /* mtctr r0 */ // 0x806F0524
    if (==) goto 0x0x806f054c;
    /* clrlwi r0, r9, 0x18 */ // 0x806F0530
    /* mulli r0, r0, 0x30 */ // 0x806F0534
    r5 = r3 + r0; // 0x806F0538
    r0 = *(0x20 + r5); // lwz @ 0x806F053C
    if (>=) goto 0x0x806f054c;
    r8 = r0;
    r9 = r9 + 1; // 0x806F054C
    if (==) goto 0x0x806f0574;
    /* clrlwi r0, r9, 0x18 */ // 0x806F0558
    /* mulli r0, r0, 0x30 */ // 0x806F055C
    r5 = r3 + r0; // 0x806F0560
    r0 = *(0x20 + r5); // lwz @ 0x806F0564
    if (>=) goto 0x0x806f0574;
    r8 = r0;
    r9 = r9 + 1; // 0x806F0574
    if (==) goto 0x0x806f059c;
    /* clrlwi r0, r9, 0x18 */ // 0x806F0580
    /* mulli r0, r0, 0x30 */ // 0x806F0584
    r5 = r3 + r0; // 0x806F0588
    r0 = *(0x20 + r5); // lwz @ 0x806F058C
    if (>=) goto 0x0x806f059c;
    r8 = r0;
    r9 = r9 + 1; // 0x806F059C
    if (==) goto 0x0x806f05c4;
    /* clrlwi r0, r9, 0x18 */ // 0x806F05A8
    /* mulli r0, r0, 0x30 */ // 0x806F05AC
    r5 = r3 + r0; // 0x806F05B0
    r0 = *(0x20 + r5); // lwz @ 0x806F05B4
    if (>=) goto 0x0x806f05c4;
    r8 = r0;
    r9 = r9 + 1; // 0x806F05C4
    if (==) goto 0x0x806f05ec;
    /* clrlwi r0, r9, 0x18 */ // 0x806F05D0
    /* mulli r0, r0, 0x30 */ // 0x806F05D4
    r5 = r3 + r0; // 0x806F05D8
    r0 = *(0x20 + r5); // lwz @ 0x806F05DC
    if (>=) goto 0x0x806f05ec;
    r8 = r0;
    r9 = r9 + 1; // 0x806F05EC
    if (==) goto 0x0x806f0614;
    /* clrlwi r0, r9, 0x18 */ // 0x806F05F8
    /* mulli r0, r0, 0x30 */ // 0x806F05FC
    r5 = r3 + r0; // 0x806F0600
    r0 = *(0x20 + r5); // lwz @ 0x806F0604
    if (>=) goto 0x0x806f0614;
    r8 = r0;
    r9 = r9 + 1; // 0x806F0614
    if (counter-- != 0) goto 0x0x806f0528;
    *(0x29c0 + r7) = r8; // stw @ 0x806F0620
    if (<=) goto 0x0x806f0630;
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806F0634
    r0 = *(0x14 + r1); // lwz @ 0x806F0638
    return;
}