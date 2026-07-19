/* Function at 0x806F78E8, size=752 bytes */
/* Stack frame: 480 bytes */
/* Saved registers: r27 */
/* Calls: 18 function(s) */

int FUN_806F78E8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -480(r1) */
    /* saved r27 */
    /* stmw r27, 0x1cc(r1) */ // 0x806F78F4
    /* lis r29, 0 */ // 0x806F78F8
    r30 = r3;
    r3 = *(0 + r29); // lwz @ 0x806F7900
    FUN_80703B7C(); // bl 0x80703B7C
    r3 = *(0 + r29); // lwz @ 0x806F7908
    FUN_80703B64(); // bl 0x80703B64
    if (==) goto 0x0x806f794c;
    r3 = *(0 + r29); // lwz @ 0x806F7918
    FUN_80703B6C(); // bl 0x80703B6C
    if (==) goto 0x0x806f794c;
    r3 = r30;
    FUN_80701E68(r3); // bl 0x80701E68
    r3 = *(0 + r29); // lwz @ 0x806F7930
    FUN_80703B58(r3); // bl 0x80703B58
    /* li r0, 0 */ // 0x806F7938
    *(0x28 + r30) = r0; // stb @ 0x806F793C
    *(0x7578 + r30) = r0; // stw @ 0x806F7940
    *(0x10 + r30) = r0; // stw @ 0x806F7944
    /* b 0x806f7bf8 */ // 0x806F7948
    /* lis r3, 0 */ // 0x806F794C
    r31 = r30 + 0x4200; // 0x806F7950
    r3 = *(0 + r3); // lwz @ 0x806F7954
    FUN_80703B64(r3); // bl 0x80703B64
    if (==) goto 0x0x806f7bf8;
    r0 = *(0x1c4 + r31); // lwz @ 0x806F7964
    if (!=) goto 0x0x806f79a4;
    r0 = *(0xe4 + r31); // lwz @ 0x806F7970
    /* li r29, 0 */ // 0x806F7974
    if (==) goto 0x0x806f79d4;
    r0 = *(0xe8 + r31); // lwz @ 0x806F7980
    if (==) goto 0x0x806f79d4;
    r3 = r31 + 0xec; // 0x806F798C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806f79d4;
    /* li r29, 1 */ // 0x806F799C
    /* b 0x806f79d4 */ // 0x806F79A0
    r0 = *(4 + r31); // lwz @ 0x806F79A4
    /* li r29, 0 */ // 0x806F79A8
    if (==) goto 0x0x806f79d4;
    r0 = *(8 + r31); // lwz @ 0x806F79B4
    if (==) goto 0x0x806f79d4;
    r3 = r31 + 0xc; // 0x806F79C0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806f79d4;
    /* li r29, 1 */ // 0x806F79D0
    if (==) goto 0x0x806f7bcc;
    r0 = *(0x1c4 + r31); // lwz @ 0x806F79DC
    if (!=) goto 0x0x806f7a30;
    r4 = *(0x1c0 + r31); // lwz @ 0x806F79E8
    r3 = r30;
    r6 = r31;
    /* li r5, 1 */ // 0x806F79F4
    FUN_80700F94(r3, r6, r5); // bl 0x80700F94
    if (==) goto 0x0x806f7a10;
    /* li r0, 1 */ // 0x806F7A04
    *(0x1c4 + r31) = r0; // stw @ 0x806F7A08
    /* b 0x806f7bf8 */ // 0x806F7A0C
    /* lis r3, 0 */ // 0x806F7A10
    r3 = *(0 + r3); // lwz @ 0x806F7A14
    FUN_80703B58(r3); // bl 0x80703B58
    /* li r0, 0 */ // 0x806F7A1C
    *(0x28 + r30) = r0; // stb @ 0x806F7A20
    *(0x7578 + r30) = r0; // stw @ 0x806F7A24
    *(0x10 + r30) = r0; // stw @ 0x806F7A28
    /* b 0x806f7bf8 */ // 0x806F7A2C
    /* li r0, 0x38 */ // 0x806F7A30
    r4 = r31 + -4; // 0x806F7A38
    r28 = *(0x1c0 + r31); // lwz @ 0x806F7A3C
    /* mtctr r0 */ // 0x806F7A40
    r3 = *(4 + r4); // lwz @ 0x806F7A44
    r0 = *(8 + r4); // lwzu @ 0x806F7A48
    *(4 + r5) = r3; // stw @ 0x806F7A4C
    *(8 + r5) = r0; // stwu @ 0x806F7A50
    if (counter-- != 0) goto 0x0x806f7a44;
    r0 = *(0xec + r1); // lwz @ 0x806F7A58
    /* lis r3, 0 */ // 0x806F7A5C
    r3 = *(0 + r3); // lwz @ 0x806F7A60
    /* li r29, 0 */ // 0x806F7A64
    /* addis r27, r3, 2 */ // 0x806F7A6C
    if (==) goto 0x0x806f7a94;
    r0 = *(0xf0 + r1); // lwz @ 0x806F7A74
    if (==) goto 0x0x806f7a94;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806f7a94;
    /* li r29, 1 */ // 0x806F7A90
    if (==) goto 0x0x806f7b00;
    r0 = *(0xc + r1); // lwz @ 0x806F7A9C
    /* li r29, 0 */ // 0x806F7AA0
    if (==) goto 0x0x806f7acc;
    r0 = *(0x10 + r1); // lwz @ 0x806F7AAC
    if (==) goto 0x0x806f7acc;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806f7acc;
    /* li r29, 1 */ // 0x806F7AC8
    if (==) goto 0x0x806f7b00;
    /* li r0, 0xff */ // 0x806F7AD4
    *(0x1ac + r1) = r0; // stb @ 0x806F7AD8
    r5 = r28;
    *(0xcc + r1) = r0; // stb @ 0x806F7AE4
    /* li r6, 0 */ // 0x806F7AE8
    r3 = *(0x4ffc + r27); // lwz @ 0x806F7AEC
    /* addis r3, r3, 2 */ // 0x806F7AF0
    r3 = r3 + 0x3308; // 0x806F7AF4
    FUN_805D77BC(r6, r3); // bl 0x805D77BC
    /* b 0x806f7b04 */ // 0x806F7AFC
    /* li r3, 0 */ // 0x806F7B00
    if (==) goto 0x0x806f7b9c;
    r5 = *(0x1c8 + r31); // lwz @ 0x806F7B0C
    /* li r29, 1 */ // 0x806F7B10
    r3 = r30;
    r4 = r31 + 0x1c0; // 0x806F7B18
    *(0 + r5) = r29; // stb @ 0x806F7B1C
    /* li r5, 1 */ // 0x806F7B20
    FUN_806F8AC4(r3, r4, r5); // bl 0x806F8AC4
    if (==) goto 0x0x806f7b78;
    r4 = *(0x1c0 + r31); // lwz @ 0x806F7B30
    r3 = r30;
    r6 = r31 + 0xe0; // 0x806F7B38
    /* li r5, 0 */ // 0x806F7B3C
    FUN_80700F94(r3, r6, r5); // bl 0x80700F94
    if (==) goto 0x0x806f7b58;
    /* li r0, 0 */ // 0x806F7B4C
    *(0x1c4 + r31) = r0; // stw @ 0x806F7B50
    /* b 0x806f7bf8 */ // 0x806F7B54
    /* lis r3, 0 */ // 0x806F7B58
    r3 = *(0 + r3); // lwz @ 0x806F7B5C
    FUN_80703B58(r3); // bl 0x80703B58
    /* li r0, 0 */ // 0x806F7B64
    *(0x28 + r30) = r0; // stb @ 0x806F7B68
    *(0x7578 + r30) = r0; // stw @ 0x806F7B6C
    *(0x10 + r30) = r0; // stw @ 0x806F7B70
    /* b 0x806f7bf8 */ // 0x806F7B74
    *(0x14 + r30) = r29; // stw @ 0x806F7B78
    /* lis r3, 0 */ // 0x806F7B7C
    r3 = *(0 + r3); // lwz @ 0x806F7B80
    FUN_80703B58(r3); // bl 0x80703B58
    /* li r0, 0 */ // 0x806F7B88
    *(0x28 + r30) = r0; // stb @ 0x806F7B8C
    *(0x7578 + r30) = r0; // stw @ 0x806F7B90
    *(0x10 + r30) = r0; // stw @ 0x806F7B94
    /* b 0x806f7bf8 */ // 0x806F7B98
    /* li r3, -0x2855 */ // 0x806F7B9C
    /* li r0, 3 */ // 0x806F7BA0
    *(0x18 + r30) = r3; // stw @ 0x806F7BA4
    /* lis r3, 0 */ // 0x806F7BA8
    *(0x14 + r30) = r0; // stw @ 0x806F7BAC
    r3 = *(0 + r3); // lwz @ 0x806F7BB0
    FUN_80703B58(r3); // bl 0x80703B58
    /* li r0, 0 */ // 0x806F7BB8
    *(0x28 + r30) = r0; // stb @ 0x806F7BBC
    *(0x7578 + r30) = r0; // stw @ 0x806F7BC0
    *(0x10 + r30) = r0; // stw @ 0x806F7BC4
    /* b 0x806f7bf8 */ // 0x806F7BC8
    /* li r3, -0x2859 */ // 0x806F7BCC
    /* li r0, 3 */ // 0x806F7BD0
    *(0x18 + r30) = r3; // stw @ 0x806F7BD4
}