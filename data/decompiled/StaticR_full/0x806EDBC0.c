/* Function at 0x806EDBC0, size=652 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_806EDBC0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r3;
    *(0x20 + r1) = r28; // stw @ 0x806EDBE0
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lis r3, 0 */ // 0x806EDBE8
    /* lis r4, 0 */ // 0x806EDBEC
    r8 = *(0 + r3); // lwz @ 0x806EDBF0
    /* lis r3, 0 */ // 0x806EDBF4
    r6 = *(0 + r4); // lwz @ 0x806EDBF8
    /* li r0, 6 */ // 0x806EDBFC
    r4 = *(0x291c + r8); // lwz @ 0x806EDC00
    /* li r31, -1 */ // 0x806EDC04
    r9 = *(0 + r3); // lwz @ 0x806EDC08
    /* li r30, 0 */ // 0x806EDC0C
    /* mulli r10, r4, 0x58 */ // 0x806EDC10
    /* li r11, 0 */ // 0x806EDC14
    /* li r12, 0 */ // 0x806EDC18
    /* lis r4, 1 */ // 0x806EDC1C
    r3 = r8 + r10; // 0x806EDC20
    /* li r5, 1 */ // 0x806EDC24
    r7 = *(0x48 + r3); // lwz @ 0x806EDC28
    /* mtctr r0 */ // 0x806EDC2C
    /* clrlwi r0, r12, 0x18 */ // 0x806EDC30
    r0 = r5 << r0; // slw
    /* and. r0, r0, r7 */ // 0x806EDC38
    if (==) goto 0x0x806edc9c;
    r3 = r8 + r10; // 0x806EDC40
    r0 = *(0x59 + r3); // lbz @ 0x806EDC48
    if (!=) goto 0x0x806edc88;
    r0 = *(0x36 + r9); // lha @ 0x806EDC54
    if (<) goto 0x0x806edc78;
    /* clrlwi r3, r0, 0x18 */ // 0x806EDC60
    r0 = r4 + -0x6c10; // 0x806EDC64
    r0 = r0 * r3; // 0x806EDC68
    r3 = r9 + r0; // 0x806EDC6C
    r3 = r3 + 0x38; // 0x806EDC70
    /* b 0x806edc7c */ // 0x806EDC74
    /* li r3, 0 */ // 0x806EDC78
    /* addis r3, r3, 1 */ // 0x806EDC7C
    r0 = *(-0x6fe8 + r3); // lhz @ 0x806EDC80
    /* b 0x806edc8c */ // 0x806EDC84
    r0 = *(0x180 + r6); // lhz @ 0x806EDC88
    r30 = r30 + r0; // 0x806EDC90
    if (>=) goto 0x0x806edc9c;
    r31 = r0;
    /* clrlwi r0, r12, 0x18 */ // 0x806EDCA0
    r0 = r5 << r0; // slw
    /* and. r0, r0, r7 */ // 0x806EDCA8
    if (==) goto 0x0x806edd0c;
    r3 = r8 + r10; // 0x806EDCB0
    r0 = *(0x59 + r3); // lbz @ 0x806EDCB8
    if (!=) goto 0x0x806edcf8;
    r0 = *(0x36 + r9); // lha @ 0x806EDCC4
    if (<) goto 0x0x806edce8;
    /* clrlwi r3, r0, 0x18 */ // 0x806EDCD0
    r0 = r4 + -0x6c10; // 0x806EDCD4
    r0 = r0 * r3; // 0x806EDCD8
    r3 = r9 + r0; // 0x806EDCDC
    r3 = r3 + 0x38; // 0x806EDCE0
    /* b 0x806edcec */ // 0x806EDCE4
    /* li r3, 0 */ // 0x806EDCE8
    /* addis r3, r3, 1 */ // 0x806EDCEC
    r0 = *(-0x6fe8 + r3); // lhz @ 0x806EDCF0
    /* b 0x806edcfc */ // 0x806EDCF4
    r0 = *(0x240 + r6); // lhz @ 0x806EDCF8
    r30 = r30 + r0; // 0x806EDD00
    if (>=) goto 0x0x806edd0c;
    r31 = r0;
    r6 = r6 + 0x180; // 0x806EDD0C
    if (counter-- != 0) goto 0x0x806edc30;
    /* clrlwi r0, r11, 0x10 */ // 0x806EDD18
    r30 = r30 u/ r0; // 0x806EDD20
    /* li r28, 1 */ // 0x806EDD24
    /* li r4, 0x64 */ // 0x806EDD28
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* lis r4, 0 */ // 0x806EDD30
    r4 = *(0 + r4); // lwz @ 0x806EDD34
    r0 = *(0xb70 + r4); // lwz @ 0x806EDD38
    if (!=) goto 0x0x806eddb4;
    if (<) goto 0x0x806edd7c;
    if (<) goto 0x0x806edd7c;
    if (>=) goto 0x0x806edd64;
    /* li r28, 1 */ // 0x806EDD5C
    /* b 0x806ede1c */ // 0x806EDD60
    if (>=) goto 0x0x806edd74;
    /* li r28, 2 */ // 0x806EDD6C
    /* b 0x806ede1c */ // 0x806EDD70
    /* li r28, 3 */ // 0x806EDD74
    /* b 0x806ede1c */ // 0x806EDD78
    if (<) goto 0x0x806ede1c;
    if (<) goto 0x0x806ede1c;
    if (>=) goto 0x0x806edd9c;
    /* li r28, 1 */ // 0x806EDD94
    /* b 0x806ede1c */ // 0x806EDD98
    if (>=) goto 0x0x806eddac;
    /* li r28, 2 */ // 0x806EDDA4
    /* b 0x806ede1c */ // 0x806EDDA8
    /* li r28, 3 */ // 0x806EDDAC
    /* b 0x806ede1c */ // 0x806EDDB0
    if (<) goto 0x0x806eddec;
    if (<) goto 0x0x806eddec;
    if (>=) goto 0x0x806eddd4;
    /* li r28, 1 */ // 0x806EDDCC
    /* b 0x806ede1c */ // 0x806EDDD0
    if (>=) goto 0x0x806edde4;
    /* li r28, 2 */ // 0x806EDDDC
    /* b 0x806ede1c */ // 0x806EDDE0
    /* li r28, 3 */ // 0x806EDDE4
    /* b 0x806ede1c */ // 0x806EDDE8
    if (<) goto 0x0x806ede1c;
    if (<) goto 0x0x806ede1c;
    if (>=) goto 0x0x806ede0c;
    /* li r28, 1 */ // 0x806EDE04
    /* b 0x806ede1c */ // 0x806EDE08
    /* li r28, 3 */ // 0x806EDE10
    if (>=) goto 0x0x806ede1c;
    /* li r28, 2 */ // 0x806EDE18
    *(0x3f + r29) = r28; // stb @ 0x806EDE1C
    /* li r4, -1 */ // 0x806EDE24
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x34 + r1); // lwz @ 0x806EDE2C
    r31 = *(0x2c + r1); // lwz @ 0x806EDE30
    r30 = *(0x28 + r1); // lwz @ 0x806EDE34
    r29 = *(0x24 + r1); // lwz @ 0x806EDE38
    r28 = *(0x20 + r1); // lwz @ 0x806EDE3C
    return;
}