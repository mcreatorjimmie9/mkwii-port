/* Function at 0x805D77BC, size=468 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805D77BC(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* li r9, -1 */ // 0x805D77C4
    /* li r10, 0 */ // 0x805D77C8
    *(0x14 + r1) = r0; // stw @ 0x805D77CC
    /* li r0, 5 */ // 0x805D77D0
    /* mtctr r0 */ // 0x805D77D4
    /* extsh r0, r9 */ // 0x805D77D8
    if (!=) goto 0x0x805d7804;
    /* clrlwi r0, r10, 0x18 */ // 0x805D77E4
    /* mulli r7, r0, 0x384 */ // 0x805D77E8
    r7 = r3 + r7; // 0x805D77EC
    r7 = *(8 + r7); // lwz @ 0x805D77F0
    if (!=) goto 0x0x805d7804;
    r9 = r0;
    /* b 0x805d7824 */ // 0x805D7800
    /* clrlwi r8, r10, 0x18 */ // 0x805D7804
    /* mulli r0, r8, 0x384 */ // 0x805D7808
    r7 = r3 + r0; // 0x805D780C
    r0 = *(8 + r7); // lwz @ 0x805D7810
    if (!=) goto 0x0x805d7824;
    r9 = r8;
    /* b 0x805d787c */ // 0x805D7820
    /* extsh r0, r9 */ // 0x805D7824
    /* clrlwi r0, r10, 0x18 */ // 0x805D7830
    if (!=) goto 0x0x805d7854;
    /* mulli r7, r0, 0x384 */ // 0x805D7838
    r7 = r3 + r7; // 0x805D783C
    r7 = *(8 + r7); // lwz @ 0x805D7840
    if (!=) goto 0x0x805d7854;
    r9 = r0;
    /* b 0x805d7874 */ // 0x805D7850
    /* clrlwi r8, r10, 0x18 */ // 0x805D7854
    /* mulli r0, r8, 0x384 */ // 0x805D7858
    r7 = r3 + r0; // 0x805D785C
    r0 = *(8 + r7); // lwz @ 0x805D7860
    if (!=) goto 0x0x805d7874;
    r9 = r8;
    /* b 0x805d787c */ // 0x805D7870
    if (counter-- != 0) goto 0x0x805d77d8;
    /* extsh. r0, r9 */ // 0x805D787C
    if (>=) goto 0x0x805d795c;
    /* li r0, 2 */ // 0x805D7884
    r8 = r5;
    /* li r10, 0 */ // 0x805D788C
    /* mtctr r0 */ // 0x805D7890
    /* clrlwi r0, r10, 0x18 */ // 0x805D7894
    /* mulli r7, r0, 0x384 */ // 0x805D7898
    r7 = r3 + r7; // 0x805D789C
    r7 = *(8 + r7); // lwz @ 0x805D78A0
    if (>=) goto 0x0x805d78b4;
    r9 = r0;
    r8 = r7;
    /* clrlwi r0, r10, 0x18 */ // 0x805D78B8
    /* mulli r7, r0, 0x384 */ // 0x805D78BC
    r7 = r3 + r7; // 0x805D78C0
    r7 = *(8 + r7); // lwz @ 0x805D78C4
    if (>=) goto 0x0x805d78d8;
    r9 = r0;
    r8 = r7;
    /* clrlwi r0, r10, 0x18 */ // 0x805D78DC
    /* mulli r7, r0, 0x384 */ // 0x805D78E0
    r7 = r3 + r7; // 0x805D78E4
    r7 = *(8 + r7); // lwz @ 0x805D78E8
    if (>=) goto 0x0x805d78fc;
    r9 = r0;
    r8 = r7;
    /* clrlwi r0, r10, 0x18 */ // 0x805D7900
    /* mulli r7, r0, 0x384 */ // 0x805D7904
    r7 = r3 + r7; // 0x805D7908
    r7 = *(8 + r7); // lwz @ 0x805D790C
    if (>=) goto 0x0x805d7920;
    r9 = r0;
    r8 = r7;
    /* clrlwi r0, r10, 0x18 */ // 0x805D7924
    /* mulli r7, r0, 0x384 */ // 0x805D7928
    r7 = r3 + r7; // 0x805D792C
    r7 = *(8 + r7); // lwz @ 0x805D7930
    if (>=) goto 0x0x805d7944;
    r9 = r0;
    r8 = r7;
    if (counter-- != 0) goto 0x0x805d7894;
    /* extsh. r0, r9 */ // 0x805D794C
    if (>=) goto 0x0x805d795c;
    /* li r3, 0 */ // 0x805D7954
    /* b 0x805d7984 */ // 0x805D7958
    /* extsh r0, r9 */ // 0x805D795C
    /* mulli r0, r0, 0x384 */ // 0x805D7960
    r3 = r3 + r0; // 0x805D7964
    /* mulli r0, r6, 0x1c0 */ // 0x805D7968
    *(8 + r3) = r5; // stw @ 0x805D796C
    /* li r5, 0x1c0 */ // 0x805D7970
    r3 = r3 + r0; // 0x805D7974
    r3 = r3 + 0xc; // 0x805D7978
    FUN_805E3430(r5, r3); // bl 0x805E3430
    /* li r3, 1 */ // 0x805D7980
    r0 = *(0x14 + r1); // lwz @ 0x805D7984
}