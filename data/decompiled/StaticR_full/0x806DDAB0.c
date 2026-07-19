/* Function at 0x806DDAB0, size=368 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806DDAB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x806DDAC4
    r30 = r3;
    r4 = r30;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* li r0, 0 */ // 0x806DDADC
    *(8 + r1) = r0; // stw @ 0x806DDAE0
    *(0xc + r1) = r0; // stw @ 0x806DDAE4
    if (==) goto 0x0x806ddb18;
    if (==) goto 0x0x806ddb3c;
    if (==) goto 0x0x806ddb60;
    if (==) goto 0x0x806ddb84;
    if (==) goto 0x0x806ddba8;
    if (==) goto 0x0x806ddbcc;
    /* b 0x806ddbec */ // 0x806DDB14
    /* lis r6, 0 */ // 0x806DDB18
    r6 = r6 + 0; // 0x806DDB20
    r4 = r6 + 0x1a1; // 0x806DDB28
    r5 = r6 + 0x1a9; // 0x806DDB2C
    r6 = r6 + 0x1c9; // 0x806DDB30
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x806ddbec */ // 0x806DDB38
    /* lis r6, 0 */ // 0x806DDB3C
    r6 = r6 + 0; // 0x806DDB44
    r4 = r6 + 0x1d6; // 0x806DDB4C
    r5 = r6 + 0x1de; // 0x806DDB50
    r6 = r6 + 0x1fa; // 0x806DDB54
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x806ddbec */ // 0x806DDB5C
    /* lis r6, 0 */ // 0x806DDB60
    r6 = r6 + 0; // 0x806DDB68
    r4 = r6 + 0x207; // 0x806DDB70
    r5 = r6 + 0x20f; // 0x806DDB74
    r6 = r6 + 0x22f; // 0x806DDB78
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x806ddbec */ // 0x806DDB80
    /* lis r6, 0 */ // 0x806DDB84
    r6 = r6 + 0; // 0x806DDB8C
    r4 = r6 + 0x23c; // 0x806DDB94
    r5 = r6 + 0x244; // 0x806DDB98
    r6 = r6 + 0x260; // 0x806DDB9C
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x806ddbec */ // 0x806DDBA4
    /* lis r6, 0 */ // 0x806DDBA8
    r6 = r6 + 0; // 0x806DDBB0
    r4 = r6 + 0x26d; // 0x806DDBB8
    r5 = r6 + 0x275; // 0x806DDBBC
    r6 = r6 + 0x291; // 0x806DDBC0
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x806ddbec */ // 0x806DDBC8
    /* lis r6, 0 */ // 0x806DDBCC
    r6 = r6 + 0; // 0x806DDBD4
    r4 = r6 + 0x29e; // 0x806DDBDC
    r5 = r6 + 0x2a6; // 0x806DDBE0
    r6 = r6 + 0x2be; // 0x806DDBE4
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* lis r3, 0 */ // 0x806DDBEC
    *(0x174 + r30) = r31; // stw @ 0x806DDBF0
    /* lfs f0, 0(r3) */ // 0x806DDBF4
    /* stfs f0, 0x7c(r30) */ // 0x806DDBFC
    /* li r4, -1 */ // 0x806DDC00
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x806DDC08
    r31 = *(0x3c + r1); // lwz @ 0x806DDC0C
    r30 = *(0x38 + r1); // lwz @ 0x806DDC10
    return;
}