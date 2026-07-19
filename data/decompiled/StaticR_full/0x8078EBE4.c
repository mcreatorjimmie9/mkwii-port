/* Function at 0x8078EBE4, size=524 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8078EBE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8078EBFC
    r29 = r3;
    r3 = r3 + 0x94; // 0x8078EC04
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x8078ec1c;
    /* li r3, 0 */ // 0x8078EC14
    /* b 0x8078eddc */ // 0x8078EC18
    r3 = *(0x80 + r29); // lwz @ 0x8078EC1C
    /* li r31, 0 */ // 0x8078EC20
    if (==) goto 0x0x8078ec4c;
    if (==) goto 0x0x8078ec38;
    r0 = *(0x90 + r3); // lwz @ 0x8078EC30
    /* b 0x8078ec3c */ // 0x8078EC34
    /* li r0, -1 */ // 0x8078EC38
    if (!=) goto 0x0x8078ec4c;
    r31 = r29 + 0x80; // 0x8078EC44
    /* b 0x8078eccc */ // 0x8078EC48
    r3 = *(0x84 + r29); // lwz @ 0x8078EC4C
    if (==) goto 0x0x8078ec78;
    if (==) goto 0x0x8078ec64;
    r0 = *(0x90 + r3); // lwz @ 0x8078EC5C
    /* b 0x8078ec68 */ // 0x8078EC60
    /* li r0, -1 */ // 0x8078EC64
    if (!=) goto 0x0x8078ec78;
    r31 = r29 + 0x84; // 0x8078EC70
    /* b 0x8078eccc */ // 0x8078EC74
    r3 = *(0x88 + r29); // lwz @ 0x8078EC78
    if (==) goto 0x0x8078eca4;
    if (==) goto 0x0x8078ec90;
    r0 = *(0x90 + r3); // lwz @ 0x8078EC88
    /* b 0x8078ec94 */ // 0x8078EC8C
    /* li r0, -1 */ // 0x8078EC90
    if (!=) goto 0x0x8078eca4;
    r31 = r29 + 0x88; // 0x8078EC9C
    /* b 0x8078eccc */ // 0x8078ECA0
    r3 = *(0x8c + r29); // lwz @ 0x8078ECA4
    if (==) goto 0x0x8078eccc;
    if (==) goto 0x0x8078ecbc;
    r0 = *(0x90 + r3); // lwz @ 0x8078ECB4
    /* b 0x8078ecc0 */ // 0x8078ECB8
    /* li r0, -1 */ // 0x8078ECBC
    if (!=) goto 0x0x8078eccc;
    r31 = r29 + 0x8c; // 0x8078ECC8
    if (!=) goto 0x0x8078edb4;
    r3 = *(0x80 + r29); // lwz @ 0x8078ECD4
    if (!=) goto 0x0x8078ece8;
    r31 = r29 + 0x80; // 0x8078ECE0
    /* b 0x8078edb4 */ // 0x8078ECE4
    if (==) goto 0x0x8078ecf4;
    r0 = *(0x90 + r3); // lwz @ 0x8078ECEC
    /* b 0x8078ecf8 */ // 0x8078ECF0
    /* li r0, -1 */ // 0x8078ECF4
    *(8 + r1) = r0; // stw @ 0x8078ECF8
    r3 = *(0x84 + r29); // lwz @ 0x8078ECFC
    if (!=) goto 0x0x8078ed10;
    r31 = r29 + 0x84; // 0x8078ED08
    /* b 0x8078edb4 */ // 0x8078ED0C
    if (==) goto 0x0x8078ed1c;
    r0 = *(0x90 + r3); // lwz @ 0x8078ED14
    /* b 0x8078ed20 */ // 0x8078ED18
    /* li r0, -1 */ // 0x8078ED1C
    *(0xc + r1) = r0; // stw @ 0x8078ED20
    r3 = *(0x88 + r29); // lwz @ 0x8078ED24
    if (!=) goto 0x0x8078ed38;
    r31 = r29 + 0x88; // 0x8078ED30
    /* b 0x8078edb4 */ // 0x8078ED34
    if (==) goto 0x0x8078ed44;
    r0 = *(0x90 + r3); // lwz @ 0x8078ED3C
    /* b 0x8078ed48 */ // 0x8078ED40
    /* li r0, -1 */ // 0x8078ED44
    *(0x10 + r1) = r0; // stw @ 0x8078ED48
    r3 = *(0x8c + r29); // lwz @ 0x8078ED4C
    if (!=) goto 0x0x8078ed60;
    r31 = r29 + 0x8c; // 0x8078ED58
    /* b 0x8078edb4 */ // 0x8078ED5C
    if (==) goto 0x0x8078ed6c;
    r0 = *(0x90 + r3); // lwz @ 0x8078ED64
    /* b 0x8078ed70 */ // 0x8078ED68
    /* li r0, -1 */ // 0x8078ED6C
    *(0x14 + r1) = r0; // stw @ 0x8078ED70
    r4 = r30;
    r3 = r29 + 0x94; // 0x8078ED78
    /* li r6, 4 */ // 0x8078ED80
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x8078ed98;
    /* li r31, 0 */ // 0x8078ED90
    /* b 0x8078edb4 */ // 0x8078ED94
    /* slwi r0, r3, 2 */ // 0x8078ED98
    r31 = r29 + r0; // 0x8078ED9C
    r3 = *(0x80 + r31); // lwzu @ 0x8078EDA0
    if (==) goto 0x0x8078edb4;
    /* li r4, 0 */ // 0x8078EDAC
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x8078edd8;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078EDC8
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078eddc */ // 0x8078EDD4
    /* li r3, 0 */ // 0x8078EDD8
    r0 = *(0x34 + r1); // lwz @ 0x8078EDDC
    r31 = *(0x2c + r1); // lwz @ 0x8078EDE0
    r30 = *(0x28 + r1); // lwz @ 0x8078EDE4
    r29 = *(0x24 + r1); // lwz @ 0x8078EDE8
}