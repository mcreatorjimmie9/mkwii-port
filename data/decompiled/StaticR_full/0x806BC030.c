/* Function at 0x806BC030, size=128 bytes */
/* Stack frame: 128 bytes */
/* Calls: 3 function(s) */

int FUN_806BC030(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    r4 = r3;
    *(0x84 + r1) = r0; // stw @ 0x806BC03C
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x806BC048
    /* li r0, 9 */ // 0x806BC04C
    r3 = r3 + 0; // 0x806BC050
    r4 = r3 + -4; // 0x806BC058
    /* mtctr r0 */ // 0x806BC05C
    r3 = *(4 + r4); // lwz @ 0x806BC060
    r0 = *(8 + r4); // lwzu @ 0x806BC064
    *(4 + r5) = r3; // stw @ 0x806BC068
    *(8 + r5) = r0; // stwu @ 0x806BC06C
    if (counter-- != 0) goto 0x0x806bc060;
    /* lis r6, 0 */ // 0x806BC074
    r6 = r6 + 0; // 0x806BC07C
    r4 = r6 + 0x15; // 0x806BC084
    r5 = r6 + 0x23; // 0x806BC088
    r6 = r6 + 0x2f; // 0x806BC08C
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806BC098
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x84 + r1); // lwz @ 0x806BC0A0
    return;
}