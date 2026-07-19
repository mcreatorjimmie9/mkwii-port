/* Function at 0x808F090C, size=316 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 13 function(s) */

int FUN_808F090C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0xd8 + r1) = r30; // stw @ 0x808F0920
    r30 = r5;
    *(0xd4 + r1) = r29; // stw @ 0x808F0928
    r29 = r4;
    FUN_80654ECC(); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808F0934
    r5 = *(0 + r3); // lwz @ 0x808F0938
    r0 = *(0x36 + r5); // lha @ 0x808F093C
    if (<) goto 0x0x808f0964;
    /* lis r3, 1 */ // 0x808F0948
    /* clrlwi r4, r0, 0x18 */ // 0x808F094C
    r0 = r3 + -0x6c10; // 0x808F0950
    r0 = r0 * r4; // 0x808F0954
    r3 = r5 + r0; // 0x808F0958
    r31 = r3 + 0x38; // 0x808F095C
    /* b 0x808f0968 */ // 0x808F0960
    /* li r31, 0 */ // 0x808F0964
    if (==) goto 0x0x808f098c;
    if (==) goto 0x0x808f09c4;
    if (==) goto 0x0x808f09d8;
    if (==) goto 0x0x808f09ec;
    /* b 0x808f09fc */ // 0x808F0988
    r3 = r31;
    FUN_805D7F14(r3); // bl 0x805D7F14
    FUN_805B7218(r3); // bl 0x805B7218
    if (==) goto 0x0x808f09ac;
    /* li r0, 0x2340 */ // 0x808F09A0
    *(0x2c + r1) = r0; // stw @ 0x808F09A4
    /* b 0x808f09fc */ // 0x808F09A8
    r3 = r31;
    FUN_805D7F14(r3); // bl 0x805D7F14
    /* li r4, 1 */ // 0x808F09B4
    FUN_808AF914(r3, r4); // bl 0x808AF914
    *(0x2c + r1) = r3; // stw @ 0x808F09BC
    /* b 0x808f09fc */ // 0x808F09C0
    r3 = r31;
    FUN_805D7FD4(r4, r3); // bl 0x805D7FD4
    FUN_808AF680(r3); // bl 0x808AF680
    *(0x2c + r1) = r3; // stw @ 0x808F09D0
    /* b 0x808f09fc */ // 0x808F09D4
    r3 = r31;
    FUN_805D80B4(r3); // bl 0x805D80B4
    FUN_808AF808(r3); // bl 0x808AF808
    *(0x2c + r1) = r3; // stw @ 0x808F09E4
    /* b 0x808f09fc */ // 0x808F09E8
    r3 = r31;
    FUN_805D81D4(r3); // bl 0x805D81D4
    FUN_808AF8D4(r3); // bl 0x808AF8D4
    *(0x2c + r1) = r3; // stw @ 0x808F09F8
    /* lis r31, 0 */ // 0x808F09FC
    r3 = r30;
    r31 = r31 + 0; // 0x808F0A04
    r5 = r29 + 0x2018; // 0x808F0A08
    r4 = r31 + 0x46; // 0x808F0A0C
    /* li r6, 0 */ // 0x808F0A10
    FUN_806A093C(r3, r5, r4, r6); // bl 0x806A093C
    r3 = r30;
    r4 = r31 + 0x50; // 0x808F0A1C
    r5 = r29 + 0x204a; // 0x808F0A20
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r0 = *(0xe4 + r1); // lwz @ 0x808F0A2C
    r31 = *(0xdc + r1); // lwz @ 0x808F0A30
    r30 = *(0xd8 + r1); // lwz @ 0x808F0A34
    r29 = *(0xd4 + r1); // lwz @ 0x808F0A38
    return;
}