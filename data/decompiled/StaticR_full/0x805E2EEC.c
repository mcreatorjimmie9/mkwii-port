/* Function at 0x805E2EEC, size=252 bytes */
/* Stack frame: 16 bytes */
/* Calls: 5 function(s) */

void FUN_805E2EEC(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E2EF4
    r0 = *(0x2540 + r3); // lbz @ 0x805E2EF8
    if (==) goto 0x0x805e2f6c;
    /* lis r3, 0 */ // 0x805E2F04
    r0 = *(0 + r3); // lbz @ 0x805E2F08
    if (!=) goto 0x0x805e2f1c;
    /* li r0, 1 */ // 0x805E2F14
    *(0 + r3) = r0; // stb @ 0x805E2F18
    /* lis r3, 0 */ // 0x805E2F1C
    r0 = *(0 + r3); // lwz @ 0x805E2F20
    /* clrlwi. r0, r0, 0x1f */ // 0x805E2F24
    if (!=) goto 0x0x805e2f38;
    r0 = *(0 + r3); // lwz @ 0x805E2F2C
    r0 = r0 | 1; // 0x805E2F30
    *(0 + r3) = r0; // stw @ 0x805E2F34
    FUN_80818E48(); // bl 0x80818E48
    if (!=) goto 0x0x805e2f50;
    /* lis r3, 0 */ // 0x805E2F44
    /* li r0, 1 */ // 0x805E2F48
    *(0 + r3) = r0; // stb @ 0x805E2F4C
    /* lis r3, 0 */ // 0x805E2F50
    r0 = *(0 + r3); // lbz @ 0x805E2F54
    if (!=) goto 0x0x805e2f70;
    /* li r0, 1 */ // 0x805E2F60
    *(0 + r3) = r0; // stb @ 0x805E2F64
    /* b 0x805e2f70 */ // 0x805E2F68
    FUN_805E2B54(); // bl 0x805E2B54
    /* lis r3, 0 */ // 0x805E2F70
    r3 = *(0 + r3); // lwz @ 0x805E2F74
    r0 = *(0x4c + r3); // lbz @ 0x805E2F78
    if (!=) goto 0x0x805e2fcc;
    /* lis r3, 0 */ // 0x805E2F84
    r3 = *(0 + r3); // lwz @ 0x805E2F88
    r0 = *(0x2d + r3); // lbz @ 0x805E2F8C
    if (!=) goto 0x0x805e2fa4;
    /* lis r3, 0 */ // 0x805E2F98
    r3 = *(0 + r3); // lwz @ 0x805E2F9C
    FUN_80698714(r3); // bl 0x80698714
    /* lis r3, 0 */ // 0x805E2FA4
    r3 = *(0 + r3); // lwz @ 0x805E2FA8
    r0 = *(0x2d + r3); // lbz @ 0x805E2FAC
    if (!=) goto 0x0x805e2fcc;
    /* lis r3, 0 */ // 0x805E2FB8
    r3 = *(0 + r3); // lwz @ 0x805E2FBC
    if (==) goto 0x0x805e2fcc;
    FUN_80909EA0(r3); // bl 0x80909EA0
    /* lis r3, 0 */ // 0x805E2FCC
    r3 = *(0 + r3); // lwz @ 0x805E2FD0
    FUN_806E3340(r3); // bl 0x806E3340
    r0 = *(0x14 + r1); // lwz @ 0x805E2FD8
    return;
}