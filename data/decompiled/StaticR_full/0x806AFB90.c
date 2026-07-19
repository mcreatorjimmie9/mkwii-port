/* Function at 0x806AFB90, size=416 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806AFB90(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806AFBA4
    r0 = *(8 + r3); // lwz @ 0x806AFBA8
    if (!=) goto 0x0x806afd18;
    r5 = *(0x8b8 + r3); // lwz @ 0x806AFBB4
    /* lis r4, 0 */ // 0x806AFBB8
    /* lfs f1, 0(r4) */ // 0x806AFBBC
    /* lfs f0, 0(r5) */ // 0x806AFBC0
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x806AFBC4
    /* cror cr0eq, cr0lt, cr0eq */ // 0x806AFBC8
    /* mfcr r0 */ // 0x806AFBCC
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x806AFBD0
    if (==) goto 0x0x806afd18;
    r0 = *(0x8b4 + r3); // lbz @ 0x806AFBD8
    if (!=) goto 0x0x806afd18;
    /* lis r4, 0 */ // 0x806AFBE4
    r4 = *(0 + r4); // lwz @ 0x806AFBE8
    r0 = *(0x291c + r4); // lwz @ 0x806AFBEC
    /* mulli r0, r0, 0x58 */ // 0x806AFBF0
    r4 = r4 + r0; // 0x806AFBF4
    r0 = *(0x8b + r4); // lbz @ 0x806AFBF8
    if (==) goto 0x0x806afc84;
    /* li r0, -1 */ // 0x806AFC04
    *(0x8b0 + r3) = r0; // stw @ 0x806AFC08
    /* lis r3, 0 */ // 0x806AFC0C
    /* li r4, -1 */ // 0x806AFC10
    r3 = *(0 + r3); // lwz @ 0x806AFC14
    r3 = *(0 + r3); // lwz @ 0x806AFC18
    r0 = *(0 + r3); // lwz @ 0x806AFC1C
    if (==) goto 0x0x806afc44;
    if (==) goto 0x0x806afc4c;
    if (==) goto 0x0x806afc54;
    if (==) goto 0x0x806afc5c;
    /* b 0x806afc60 */ // 0x806AFC40
    /* li r4, 0x58 */ // 0x806AFC44
    /* b 0x806afc60 */ // 0x806AFC48
    /* li r4, 0x5e */ // 0x806AFC4C
    /* b 0x806afc60 */ // 0x806AFC50
    /* li r4, 0x59 */ // 0x806AFC54
    /* b 0x806afc60 */ // 0x806AFC58
    /* li r4, 0x5f */ // 0x806AFC5C
    r12 = *(0 + r31); // lwz @ 0x806AFC60
    /* lis r5, 0 */ // 0x806AFC64
    /* lfs f1, 0(r5) */ // 0x806AFC68
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x806AFC70
    /* li r5, 0 */ // 0x806AFC74
    /* mtctr r12 */ // 0x806AFC78
    /* bctrl  */ // 0x806AFC7C
    /* b 0x806afc94 */ // 0x806AFC80
    /* li r4, 0 */ // 0x806AFC84
    FUN_80671C48(r5, r4); // bl 0x80671C48
    /* li r0, 0x48 */ // 0x806AFC8C
    *(0x8b0 + r31) = r0; // stw @ 0x806AFC90
    /* lis r3, 0 */ // 0x806AFC94
    r3 = *(0 + r3); // lwz @ 0x806AFC98
    r3 = *(0 + r3); // lwz @ 0x806AFC9C
    r30 = *(0x11c + r3); // lwz @ 0x806AFCA0
    if (!=) goto 0x0x806afcb4;
    /* li r30, 0 */ // 0x806AFCAC
    /* b 0x806afd08 */ // 0x806AFCB0
    /* lis r31, 0 */ // 0x806AFCB4
    r31 = r31 + 0; // 0x806AFCB8
    if (==) goto 0x0x806afd04;
    r12 = *(0 + r30); // lwz @ 0x806AFCC0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AFCC8
    /* mtctr r12 */ // 0x806AFCCC
    /* bctrl  */ // 0x806AFCD0
    /* b 0x806afcec */ // 0x806AFCD4
    if (!=) goto 0x0x806afce8;
    /* li r0, 1 */ // 0x806AFCE0
    /* b 0x806afcf8 */ // 0x806AFCE4
    r3 = *(0 + r3); // lwz @ 0x806AFCE8
    if (!=) goto 0x0x806afcd8;
    /* li r0, 0 */ // 0x806AFCF4
    if (==) goto 0x0x806afd04;
    /* b 0x806afd08 */ // 0x806AFD00
    /* li r30, 0 */ // 0x806AFD04
    /* li r0, 0 */ // 0x806AFD08
    *(0x1d4 + r30) = r0; // stb @ 0x806AFD0C
    r3 = r30 + 0x54; // 0x806AFD10
    FUN_8064F568(r3); // bl 0x8064F568
    r0 = *(0x14 + r1); // lwz @ 0x806AFD18
    r31 = *(0xc + r1); // lwz @ 0x806AFD1C
    r30 = *(8 + r1); // lwz @ 0x806AFD20
    return;
}