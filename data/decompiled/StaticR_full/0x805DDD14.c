/* Function at 0x805DDD14, size=416 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 7 function(s) */

int FUN_805DDD14(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x805DDD20
    r25 = r3;
    r0 = *(0x18 + r3); // lbz @ 0x805DDD28
    if (==) goto 0x0x805ddd6c;
    r26 = *(8 + r3); // lwz @ 0x805DDD34
    /* li r27, 0 */ // 0x805DDD38
    /* li r24, 0 */ // 0x805DDD3C
    /* b 0x805ddd58 */ // 0x805DDD40
    r3 = *(0x1c + r26); // lwz @ 0x805DDD44
    /* lwzx r3, r3, r24 */ // 0x805DDD48
    FUN_805DA66C(); // bl 0x805DA66C
    r24 = r24 + 4; // 0x805DDD50
    r27 = r27 + 1; // 0x805DDD54
    r0 = *(0x20 + r26); // lwz @ 0x805DDD58
    if (<) goto 0x0x805ddd44;
    /* li r0, 0 */ // 0x805DDD64
    *(0x28 + r26) = r0; // stb @ 0x805DDD68
    r0 = *(0x19 + r25); // lbz @ 0x805DDD6C
    if (==) goto 0x0x805dde48;
    r29 = *(0xc + r25); // lwz @ 0x805DDD78
    /* li r27, 0 */ // 0x805DDD7C
    /* li r26, 0 */ // 0x805DDD80
    /* li r31, -1 */ // 0x805DDD84
    /* li r30, 0 */ // 0x805DDD88
    /* b 0x805dde3c */ // 0x805DDD8C
    r3 = *(4 + r29); // lwz @ 0x805DDD90
    /* lwzx r28, r3, r26 */ // 0x805DDD94
    r0 = *(8 + r28); // lwz @ 0x805DDD98
    if (<) goto 0x0x805dddec;
    *(4 + r28) = r0; // sth @ 0x805DDDA4
    r0 = r0 rlwinm 1; // rlwinm
    *(8 + r28) = r31; // stw @ 0x805DDDAC
    *(0xc + r28) = r30; // stw @ 0x805DDDB0
    r3 = *(0x14 + r28); // lwz @ 0x805DDDB4
    r4 = *(0x18 + r28); // lwz @ 0x805DDDB8
    /* lhzx r0, r3, r0 */ // 0x805DDDBC
    /* mulli r0, r0, 0x1c */ // 0x805DDDC0
    r24 = r4 + r0; // 0x805DDDC4
    r3 = r24 + 4; // 0x805DDDC8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805dde14;
    r3 = *(0x1c + r28); // lwz @ 0x805DDDD8
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x805dde14 */ // 0x805DDDE8
    r3 = *(0xc + r28); // lwz @ 0x805DDDEC
    r0 = r3 + 1; // 0x805DDDF0
    *(0xc + r28) = r0; // stw @ 0x805DDDF4
    r0 = *(4 + r28); // lhz @ 0x805DDDF8
    r3 = *(0x14 + r28); // lwz @ 0x805DDDFC
    /* slwi r0, r0, 1 */ // 0x805DDE00
    r4 = *(0x18 + r28); // lwz @ 0x805DDE04
    /* lhzx r0, r3, r0 */ // 0x805DDE08
    /* mulli r0, r0, 0x1c */ // 0x805DDE0C
    r24 = r4 + r0; // 0x805DDE10
    r3 = r24 + 0x10; // 0x805DDE14
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805dde34;
    r3 = *(0x1c + r28); // lwz @ 0x805DDE24
    FUN_805E3430(); // bl 0x805E3430
    r26 = r26 + 4; // 0x805DDE34
    r27 = r27 + 1; // 0x805DDE38
    r0 = *(8 + r29); // lwz @ 0x805DDE3C
    if (<) goto 0x0x805ddd90;
    r27 = *(0x10 + r25); // lwz @ 0x805DDE48
    /* li r29, 0 */ // 0x805DDE4C
    /* li r26, 0 */ // 0x805DDE50
    /* li r30, -1 */ // 0x805DDE54
    /* li r31, 0 */ // 0x805DDE58
    /* b 0x805ddf0c */ // 0x805DDE5C
    r3 = *(4 + r27); // lwz @ 0x805DDE60
    /* lwzx r28, r3, r26 */ // 0x805DDE64
    r0 = *(8 + r28); // lwz @ 0x805DDE68
    if (<) goto 0x0x805ddebc;
    *(4 + r28) = r0; // sth @ 0x805DDE74
    r0 = r0 rlwinm 1; // rlwinm
    *(8 + r28) = r30; // stw @ 0x805DDE7C
    *(0xc + r28) = r31; // stw @ 0x805DDE80
    r3 = *(0x14 + r28); // lwz @ 0x805DDE84
    r4 = *(0x18 + r28); // lwz @ 0x805DDE88
    /* lhzx r0, r3, r0 */ // 0x805DDE8C
    /* mulli r0, r0, 0x1c */ // 0x805DDE90
    r24 = r4 + r0; // 0x805DDE94
    r3 = r24 + 4; // 0x805DDE98
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805ddee4;
    r3 = *(0x1c + r28); // lwz @ 0x805DDEA8
    FUN_805E3430(); // bl 0x805E3430
}