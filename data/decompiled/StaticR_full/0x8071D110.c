/* Function at 0x8071D110, size=120 bytes */
/* Stack frame: 32 bytes */
/* Calls: 2 function(s) */

int FUN_8071D110(int r3, int r5)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8071D118
    r0 = *(0x33 + r3); // lbz @ 0x8071D11C
    if (!=) goto 0x0x8071d178;
    r0 = *(0x30 + r3); // lbz @ 0x8071D128
    if (!=) goto 0x0x8071d158;
    /* lis r3, 0 */ // 0x8071D134
    /* stfs f1, 0x14(r1) */ // 0x8071D138
    r3 = r3 + 0; // 0x8071D13C
    /* stfs f1, 0x18(r1) */ // 0x8071D144
    r3 = r3 + 0x74; // 0x8071D148
    /* stfs f1, 0x1c(r1) */ // 0x8071D14C
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    /* b 0x8071d178 */ // 0x8071D154
    /* lis r3, 0 */ // 0x8071D158
    /* stfs f1, 8(r1) */ // 0x8071D15C
    r3 = r3 + 0; // 0x8071D160
    /* stfs f1, 0xc(r1) */ // 0x8071D168
    r3 = r3 + 0x81; // 0x8071D16C
    /* stfs f1, 0x10(r1) */ // 0x8071D170
    FUN_807457A0(r3, r5, r3); // bl 0x807457A0
    r0 = *(0x24 + r1); // lwz @ 0x8071D178
    return;
}