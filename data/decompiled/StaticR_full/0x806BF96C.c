/* Function at 0x806BF96C, size=732 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806BF96C(int r3, int r4, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = *(0 + r6); // lwz @ 0x806BF978
    r31 = r6;
    /* srwi r7, r0, 0x18 */ // 0x806BF984
    *(0x18 + r1) = r30; // stw @ 0x806BF988
    *(0x14 + r1) = r29; // stw @ 0x806BF990
    if (==) goto 0x0x806bf9b4;
    if (==) goto 0x0x806bf9d0;
    if (==) goto 0x0x806bf9e0;
    if (==) goto 0x0x806bf9f0;
    /* b 0x806bfa0c */ // 0x806BF9B0
    r0 = r0 rlwinm 0x18; // rlwinm
    /* li r7, 4 */ // 0x806BF9B8
    /* xori r0, r0, 4 */ // 0x806BF9BC
    /* cntlzw r0, r0 */ // 0x806BF9C0
    r0 = r7 << r0; // slw
    /* srwi r0, r0, 0x1f */ // 0x806BF9C8
    /* b 0x806bfa10 */ // 0x806BF9CC
    r0 = r0 rlwinm 0x18; // rlwinm
    /* cntlzw r0, r0 */ // 0x806BF9D4
    /* srwi r0, r0, 5 */ // 0x806BF9D8
    /* b 0x806bfa10 */ // 0x806BF9DC
    r0 = r0 rlwinm 0x18; // rlwinm
    /* cntlzw r0, r0 */ // 0x806BF9E4
    /* srwi r0, r0, 5 */ // 0x806BF9E8
    /* b 0x806bfa10 */ // 0x806BF9EC
    r0 = r0 rlwinm 0x18; // rlwinm
    /* li r7, 0x60 */ // 0x806BF9F4
    /* xori r0, r0, 0x60 */ // 0x806BF9F8
    /* cntlzw r0, r0 */ // 0x806BF9FC
    r0 = r7 << r0; // slw
    /* srwi r0, r0, 0x1f */ // 0x806BFA04
    /* b 0x806bfa10 */ // 0x806BFA08
    /* li r0, 0 */ // 0x806BFA0C
    if (==) goto 0x0x806bfc2c;
    r0 = *(0xf0 + r3); // lwz @ 0x806BFA18
    if (>=) goto 0x0x806bfa60;
    /* slwi r7, r0, 3 */ // 0x806BFA24
    r0 = *(0 + r6); // lwz @ 0x806BFA28
    r7 = r3 + r7; // 0x806BFA2C
    *(4 + r7) = r4; // stb @ 0x806BFA30
    r4 = *(0xf0 + r3); // lwz @ 0x806BFA34
    /* slwi r4, r4, 3 */ // 0x806BFA38
    r4 = r3 + r4; // 0x806BFA3C
    *(5 + r4) = r5; // stb @ 0x806BFA40
    r4 = *(0xf0 + r3); // lwz @ 0x806BFA44
    /* slwi r4, r4, 3 */ // 0x806BFA48
    /* stwx r0, r3, r4 */ // 0x806BFA4C
    r4 = *(0xf0 + r3); // lwz @ 0x806BFA50
    r0 = r4 + 1; // 0x806BFA54
    *(0xf0 + r3) = r0; // stw @ 0x806BFA58
    /* b 0x806bfb14 */ // 0x806BFA5C
    r7 = r3;
    r10 = *(0 + r6); // lwz @ 0x806BFA64
    /* li r8, -1 */ // 0x806BFA68
    /* li r9, 0 */ // 0x806BFA6C
    /* mtctr r0 */ // 0x806BFA70
    if (<=) goto 0x0x806bfa9c;
    r0 = *(0 + r7); // lwz @ 0x806BFA7C
    if (<=) goto 0x0x806bfa90;
    r8 = r9;
    r10 = r0;
    r7 = r7 + 8; // 0x806BFA90
    r9 = r9 + 1; // 0x806BFA94
    if (counter-- != 0) goto 0x0x806bfa7c;
    if (<) goto 0x0x806bfb14;
    /* slwi r0, r10, 3 */ // 0x806BFAA4
    r8 = r3 + r0; // 0x806BFAA8
    /* b 0x806bfad0 */ // 0x806BFAAC
    r0 = *(8 + r8); // lwz @ 0x806BFAB0
    *(0 + r8) = r0; // stw @ 0x806BFAB8
    r0 = *(0xc + r8); // lbz @ 0x806BFABC
    *(4 + r8) = r0; // stb @ 0x806BFAC0
    r0 = *(0xd + r8); // lbz @ 0x806BFAC4
    *(5 + r8) = r0; // stb @ 0x806BFAC8
    r8 = r8 + 8; // 0x806BFACC
    r7 = *(0xf0 + r3); // lwz @ 0x806BFAD0
    r0 = r7 + -1; // 0x806BFAD4
    if (<) goto 0x0x806bfab0;
    /* slwi r7, r0, 3 */ // 0x806BFAE0
    r0 = *(0 + r6); // lwz @ 0x806BFAE4
    r7 = r3 + r7; // 0x806BFAE8
    *(4 + r7) = r4; // stb @ 0x806BFAEC
    r4 = *(0xf0 + r3); // lwz @ 0x806BFAF0
    r4 = r4 + -1; // 0x806BFAF4
    /* slwi r4, r4, 3 */ // 0x806BFAF8
    r4 = r3 + r4; // 0x806BFAFC
    *(5 + r4) = r5; // stb @ 0x806BFB00
    r4 = *(0xf0 + r3); // lwz @ 0x806BFB04
    r4 = r4 + -1; // 0x806BFB08
    /* slwi r4, r4, 3 */ // 0x806BFB0C
    /* stwx r0, r3, r4 */ // 0x806BFB10
    r0 = *(0 + r6); // lwz @ 0x806BFB14
    /* srwi r0, r0, 0x18 */ // 0x806BFB18
    if (!=) goto 0x0x806bfc2c;
    /* lis r3, 0 */ // 0x806BFB24
    r3 = *(0 + r3); // lwz @ 0x806BFB28
    r3 = *(0 + r3); // lwz @ 0x806BFB2C
    r29 = *(0x27c + r3); // lwz @ 0x806BFB30
    if (!=) goto 0x0x806bfb44;
    /* li r29, 0 */ // 0x806BFB3C
    /* b 0x806bfb98 */ // 0x806BFB40
    /* lis r30, 0 */ // 0x806BFB44
    r30 = r30 + 0; // 0x806BFB48
    if (==) goto 0x0x806bfb94;
    r12 = *(0 + r29); // lwz @ 0x806BFB50
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BFB58
    /* mtctr r12 */ // 0x806BFB5C
    /* bctrl  */ // 0x806BFB60
    /* b 0x806bfb7c */ // 0x806BFB64
    if (!=) goto 0x0x806bfb78;
    /* li r0, 1 */ // 0x806BFB70
    /* b 0x806bfb88 */ // 0x806BFB74
    r3 = *(0 + r3); // lwz @ 0x806BFB78
    if (!=) goto 0x0x806bfb68;
    /* li r0, 0 */ // 0x806BFB84
    if (==) goto 0x0x806bfb94;
    /* b 0x806bfb98 */ // 0x806BFB90
    /* li r29, 0 */ // 0x806BFB94
    /* lis r3, 0 */ // 0x806BFB98
    r3 = *(0 + r3); // lwz @ 0x806BFB9C
    FUN_806E6508(r3); // bl 0x806E6508
    /* li r0, 1 */ // 0x806BFBA4
    *(0xdc0 + r29) = r0; // stb @ 0x806BFBA8
    /* lis r3, 0 */ // 0x806BFBAC
    r3 = *(0 + r3); // lwz @ 0x806BFBB0
    r3 = *(0 + r3); // lwz @ 0x806BFBB4
    r29 = *(0x278 + r3); // lwz @ 0x806BFBB8
    if (!=) goto 0x0x806bfbcc;
    /* li r29, 0 */ // 0x806BFBC4
    /* b 0x806bfc20 */ // 0x806BFBC8
    /* lis r30, 0 */ // 0x806BFBCC
    r30 = r30 + 0; // 0x806BFBD0
    if (==) goto 0x0x806bfc1c;
    r12 = *(0 + r29); // lwz @ 0x806BFBD8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806BFBE0
    /* mtctr r12 */ // 0x806BFBE4
    /* bctrl  */ // 0x806BFBE8
    /* b 0x806bfc04 */ // 0x806BFBEC
    if (!=) goto 0x0x806bfc00;
    /* li r0, 1 */ // 0x806BFBF8
    /* b 0x806bfc10 */ // 0x806BFBFC
    r3 = *(0 + r3); // lwz @ 0x806BFC00
    if (!=) goto 0x0x806bfbf0;
    /* li r0, 0 */ // 0x806BFC0C
    if (==) goto 0x0x806bfc1c;
    /* b 0x806bfc20 */ // 0x806BFC18
    /* li r29, 0 */ // 0x806BFC1C
    r0 = *(0 + r31); // lwz @ 0x806BFC20
    r0 = r0 rlwinm 0x18; // rlwinm
    *(0x2af4 + r29) = r0; // stw @ 0x806BFC28
    r0 = *(0x24 + r1); // lwz @ 0x806BFC2C
    r31 = *(0x1c + r1); // lwz @ 0x806BFC30
    r30 = *(0x18 + r1); // lwz @ 0x806BFC34
    r29 = *(0x14 + r1); // lwz @ 0x806BFC38
    return;
}