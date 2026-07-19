/* Function at 0x806F8718, size=656 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_806F8718(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r26 */
    /* stmw r26, 0x28(r1) */ // 0x806F8724
    r29 = r3;
    r30 = r4;
    r0 = *(0x41f4 + r3); // lwz @ 0x806F8730
    if (!=) goto 0x0x806f8990;
    /* lis r3, 0 */ // 0x806F873C
    r4 = *(0x58 + r29); // lwz @ 0x806F8740
    r3 = *(0 + r3); // lwz @ 0x806F8744
    /* addis r3, r3, 2 */ // 0x806F8748
    r3 = *(0x4ffc + r3); // lwz @ 0x806F874C
    /* addis r3, r3, 2 */ // 0x806F8750
    r3 = r3 + 0x3308; // 0x806F8754
    FUN_805D76F0(r3); // bl 0x805D76F0
    /* extsh r4, r3 */ // 0x806F875C
    r3 = r29;
    r0 = r4 + 1; // 0x806F8764
    /* li r5, 0 */ // 0x806F8768
    /* cntlzw r0, r0 */ // 0x806F876C
    /* srwi r31, r0, 5 */ // 0x806F8774
    FUN_806F8AC4(r5, r4); // bl 0x806F8AC4
    if (==) goto 0x0x806f8894;
    r5 = *(0x58 + r29); // lwz @ 0x806F8784
    r4 = *(0x18 + r1); // lwz @ 0x806F8788
    if (>=) goto 0x0x806f888c;
    /* addis r3, r29, 1 */ // 0x806F8794
    r26 = r4 + 1; // 0x806F8798
    r4 = *(-0x7500 + r3); // lwz @ 0x806F879C
    if (>=) goto 0x0x806f87ac;
    r26 = r4;
    if (>) goto 0x0x806f87b8;
    /* b 0x806f8868 */ // 0x806F87B4
    r27 = r5 + -1; // 0x806F87B8
    /* li r28, 0x3f */ // 0x806F87BC
    /* b 0x806f885c */ // 0x806F87C0
    r3 = r29;
    r4 = r27;
    FUN_806F8C24(r3, r4, r5); // bl 0x806F8C24
    if (==) goto 0x0x806f8850;
    r0 = *(0x41f4 + r29); // lwz @ 0x806F87DC
    if (!=) goto 0x0x806f8844;
    r3 = r29;
    r4 = r27;
    FUN_806F8D5C(r3, r4, r5); // bl 0x806F8D5C
    if (==) goto 0x0x806f8844;
    r5 = *(0x14 + r1); // lwz @ 0x806F8800
    /* li r3, 0 */ // 0x806F8804
    /* slwi r0, r5, 1 */ // 0x806F8808
    r4 = r29 + r0; // 0x806F880C
    /* mtctr r28 */ // 0x806F8810
    r0 = *(0x310 + r4); // lhz @ 0x806F8814
    if (!=) goto 0x0x806f8838;
    r3 = r5 + r3; // 0x806F8820
    r0 = r3 + 1; // 0x806F8824
    /* slwi r0, r0, 1 */ // 0x806F8828
    r3 = r29 + r0; // 0x806F882C
    r0 = r3 + 0x310; // 0x806F8830
    /* b 0x806f8848 */ // 0x806F8834
    r4 = r4 + 2; // 0x806F8838
    r3 = r3 + 1; // 0x806F883C
    if (counter-- != 0) goto 0x0x806f8814;
    /* li r0, 0 */ // 0x806F8844
    if (!=) goto 0x0x806f8858;
    r4 = r27 + 1; // 0x806F8850
    /* b 0x806f8868 */ // 0x806F8854
    r27 = r27 + -1; // 0x806F8858
    if (>=) goto 0x0x806f87c4;
    r4 = r26;
    *(0 + r30) = r4; // stw @ 0x806F8868
    /* li r3, 0 */ // 0x806F886C
    r0 = *(0x58 + r29); // lwz @ 0x806F8870
    if (<) goto 0x0x806f8884;
    if (!=) goto 0x0x806f8994;
    /* li r3, 1 */ // 0x806F8884
    /* b 0x806f8994 */ // 0x806F8888
    /* li r3, 0 */ // 0x806F888C
    /* b 0x806f8994 */ // 0x806F8890
    /* addis r3, r29, 1 */ // 0x806F8894
    r5 = *(0x58 + r29); // lwz @ 0x806F8898
    r4 = *(-0x7500 + r3); // lwz @ 0x806F889C
    r26 = r5 + -9; // 0x806F88A0
    if (>=) goto 0x0x806f88b0;
    r26 = r4;
    if (>) goto 0x0x806f88bc;
    /* b 0x806f896c */ // 0x806F88B8
    r27 = r5 + -1; // 0x806F88BC
    /* li r28, 0x3f */ // 0x806F88C0
    /* b 0x806f8960 */ // 0x806F88C4
    r3 = r29;
    r4 = r27;
    FUN_806F8C24(r3, r4, r5); // bl 0x806F8C24
    if (==) goto 0x0x806f8954;
    r0 = *(0x41f4 + r29); // lwz @ 0x806F88E0
    if (!=) goto 0x0x806f8948;
    r3 = r29;
    r4 = r27;
    FUN_806F8D5C(r3, r4, r5); // bl 0x806F8D5C
    if (==) goto 0x0x806f8948;
    r5 = *(0xc + r1); // lwz @ 0x806F8904
    /* li r3, 0 */ // 0x806F8908
    /* slwi r0, r5, 1 */ // 0x806F890C
    r4 = r29 + r0; // 0x806F8910
    /* mtctr r28 */ // 0x806F8914
    r0 = *(0x310 + r4); // lhz @ 0x806F8918
    if (!=) goto 0x0x806f893c;
    r3 = r5 + r3; // 0x806F8924
    r0 = r3 + 1; // 0x806F8928
    /* slwi r0, r0, 1 */ // 0x806F892C
    r3 = r29 + r0; // 0x806F8930
    r0 = r3 + 0x310; // 0x806F8934
    /* b 0x806f894c */ // 0x806F8938
    r4 = r4 + 2; // 0x806F893C
    r3 = r3 + 1; // 0x806F8940
    if (counter-- != 0) goto 0x0x806f8918;
    /* li r0, 0 */ // 0x806F8948
    if (!=) goto 0x0x806f895c;
    r4 = r27 + 1; // 0x806F8954
    /* b 0x806f896c */ // 0x806F8958
    r27 = r27 + -1; // 0x806F895C
    if (>=) goto 0x0x806f88c8;
    r4 = r26;
    *(0 + r30) = r4; // stw @ 0x806F896C
    /* li r3, 0 */ // 0x806F8970
    r0 = *(0x58 + r29); // lwz @ 0x806F8974
    if (<) goto 0x0x806f8988;
    if (!=) goto 0x0x806f8994;
    /* li r3, 1 */ // 0x806F8988
    /* b 0x806f8994 */ // 0x806F898C
    /* li r3, 0 */ // 0x806F8990
    r0 = *(0x44 + r1); // lwz @ 0x806F8998
    return;
}