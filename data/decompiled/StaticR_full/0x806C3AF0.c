/* Function at 0x806C3AF0, size=988 bytes */
/* Stack frame: 656 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 12 function(s) */

int FUN_806C3AF0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -656(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x288 + r1) = r30; // stw @ 0x806C3B04
    *(0x284 + r1) = r29; // stw @ 0x806C3B08
    r0 = *(0x68 + r3); // lwz @ 0x806C3B0C
    if (==) goto 0x0x806c3b3c;
    if (==) goto 0x0x806c3c1c;
    if (==) goto 0x0x806c3d28;
    if (==) goto 0x0x806c3d44;
    if (==) goto 0x0x806c3e34;
    /* b 0x806c3f0c */ // 0x806C3B38
    /* lis r3, 0 */ // 0x806C3B3C
    r3 = *(0 + r3); // lwz @ 0x806C3B40
    r3 = *(0 + r3); // lwz @ 0x806C3B44
    r29 = *(0x28c + r3); // lwz @ 0x806C3B48
    if (!=) goto 0x0x806c3b5c;
    /* li r29, 0 */ // 0x806C3B54
    /* b 0x806c3bb0 */ // 0x806C3B58
    /* lis r30, 0 */ // 0x806C3B5C
    r30 = r30 + 0; // 0x806C3B60
    if (==) goto 0x0x806c3bac;
    r12 = *(0 + r29); // lwz @ 0x806C3B68
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C3B70
    /* mtctr r12 */ // 0x806C3B74
    /* bctrl  */ // 0x806C3B78
    /* b 0x806c3b94 */ // 0x806C3B7C
    if (!=) goto 0x0x806c3b90;
    /* li r0, 1 */ // 0x806C3B88
    /* b 0x806c3ba0 */ // 0x806C3B8C
    r3 = *(0 + r3); // lwz @ 0x806C3B90
    if (!=) goto 0x0x806c3b80;
    /* li r0, 0 */ // 0x806C3B9C
    if (==) goto 0x0x806c3bac;
    /* b 0x806c3bb0 */ // 0x806C3BA8
    /* li r29, 0 */ // 0x806C3BAC
    r4 = r31 + 0x70; // 0x806C3BB4
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    r3 = r29 + 0x404; // 0x806C3BBC
    /* li r5, 0 */ // 0x806C3BC4
    FUN_80660C30(r4, r3, r4, r5); // bl 0x80660C30
    /* lis r4, 0 */ // 0x806C3BCC
    r4 = r4 + 0; // 0x806C3BD4
    /* li r5, 0xc */ // 0x806C3BD8
    /* li r6, 5 */ // 0x806C3BDC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r12 = *(0 + r31); // lwz @ 0x806C3BE4
    r3 = r31;
    /* li r4, 0xa1 */ // 0x806C3BEC
    /* li r5, 0 */ // 0x806C3BF0
    r12 = *(0x24 + r12); // lwz @ 0x806C3BF4
    /* mtctr r12 */ // 0x806C3BF8
    /* bctrl  */ // 0x806C3BFC
    /* li r0, 6 */ // 0x806C3C00
    *(0x68 + r31) = r0; // stw @ 0x806C3C04
    r3 = r31;
    /* li r4, 0x50 */ // 0x806C3C0C
    /* li r5, -1 */ // 0x806C3C10
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x806c3f0c */ // 0x806C3C18
    /* lis r3, 0 */ // 0x806C3C1C
    r3 = *(0 + r3); // lwz @ 0x806C3C20
    r3 = *(0 + r3); // lwz @ 0x806C3C24
    r29 = *(0x14c + r3); // lwz @ 0x806C3C28
    if (!=) goto 0x0x806c3c3c;
    /* li r29, 0 */ // 0x806C3C34
    /* b 0x806c3c90 */ // 0x806C3C38
    /* lis r30, 0 */ // 0x806C3C3C
    r30 = r30 + 0; // 0x806C3C40
    if (==) goto 0x0x806c3c8c;
    r12 = *(0 + r29); // lwz @ 0x806C3C48
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C3C50
    /* mtctr r12 */ // 0x806C3C54
    /* bctrl  */ // 0x806C3C58
    /* b 0x806c3c74 */ // 0x806C3C5C
    if (!=) goto 0x0x806c3c70;
    /* li r0, 1 */ // 0x806C3C68
    /* b 0x806c3c80 */ // 0x806C3C6C
    r3 = *(0 + r3); // lwz @ 0x806C3C70
    if (!=) goto 0x0x806c3c60;
    /* li r0, 0 */ // 0x806C3C7C
    if (==) goto 0x0x806c3c8c;
    /* b 0x806c3c90 */ // 0x806C3C88
    /* li r29, 0 */ // 0x806C3C8C
    r12 = *(0 + r29); // lwz @ 0x806C3C90
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806C3C98
    /* mtctr r12 */ // 0x806C3C9C
    /* bctrl  */ // 0x806C3CA0
    r3 = r29;
    /* li r4, 0xfa3 */ // 0x806C3CA8
    /* li r5, 0 */ // 0x806C3CAC
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r0 = r31 + 0x44; // 0x806C3CB4
    *(0x188 + r29) = r0; // stw @ 0x806C3CB8
    FUN_80654ECC(r5, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806C3CC4
    r3 = *(0 + r3); // lwz @ 0x806C3CC8
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(0xe0 + r1) = r3; // stw @ 0x806C3CD0
    r3 = r29;
    /* li r4, 0x17e0 */ // 0x806C3CDC
    r12 = *(0 + r29); // lwz @ 0x806C3CE0
    r12 = *(0x68 + r12); // lwz @ 0x806C3CE4
    /* mtctr r12 */ // 0x806C3CE8
    /* bctrl  */ // 0x806C3CEC
    r12 = *(0 + r31); // lwz @ 0x806C3CF0
    r3 = r31;
    /* li r4, 0x51 */ // 0x806C3CF8
    /* li r5, 0 */ // 0x806C3CFC
    r12 = *(0x24 + r12); // lwz @ 0x806C3D00
    /* mtctr r12 */ // 0x806C3D04
    /* bctrl  */ // 0x806C3D08
    /* li r0, 5 */ // 0x806C3D0C
    *(0x68 + r31) = r0; // stw @ 0x806C3D10
    /* lis r3, 0 */ // 0x806C3D14
    r3 = *(0 + r3); // lwz @ 0x806C3D18
    r3 = *(0 + r3); // lwz @ 0x806C3D1C
    FUN_80686240(r3); // bl 0x80686240
    /* b 0x806c3f0c */ // 0x806C3D24
    /* lis r5, 0 */ // 0x806C3D28
    /* li r0, -1 */ // 0x806C3D2C
    *(0x2870 + r3) = r0; // stw @ 0x806C3D30
    /* li r4, 0 */ // 0x806C3D34
    /* lfs f1, 0(r5) */ // 0x806C3D38
    FUN_80671C48(r5, r4); // bl 0x80671C48
    /* b 0x806c3f0c */ // 0x806C3D40
    /* lis r3, 0 */ // 0x806C3D44
    r3 = *(0 + r3); // lwz @ 0x806C3D48
    r3 = *(0 + r3); // lwz @ 0x806C3D4C
    r29 = *(0x28c + r3); // lwz @ 0x806C3D50
    if (!=) goto 0x0x806c3d64;
    /* li r29, 0 */ // 0x806C3D5C
    /* b 0x806c3db8 */ // 0x806C3D60
    /* lis r30, 0 */ // 0x806C3D64
    r30 = r30 + 0; // 0x806C3D68
    if (==) goto 0x0x806c3db4;
    r12 = *(0 + r29); // lwz @ 0x806C3D70
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C3D78
    /* mtctr r12 */ // 0x806C3D7C
    /* bctrl  */ // 0x806C3D80
    /* b 0x806c3d9c */ // 0x806C3D84
    if (!=) goto 0x0x806c3d98;
    /* li r0, 1 */ // 0x806C3D90
    /* b 0x806c3da8 */ // 0x806C3D94
    r3 = *(0 + r3); // lwz @ 0x806C3D98
    if (!=) goto 0x0x806c3d88;
    /* li r0, 0 */ // 0x806C3DA4
    if (==) goto 0x0x806c3db4;
    /* b 0x806c3db8 */ // 0x806C3DB0
    /* li r29, 0 */ // 0x806C3DB4
    r0 = *(0xb08 + r29); // lwz @ 0x806C3DB8
    if (==) goto 0x0x806c3dd0;
    if (==) goto 0x0x806c3ddc;
    /* b 0x806c3f0c */ // 0x806C3DCC
    r3 = r31;
    FUN_806C48F4(r3); // bl 0x806C48F4
    /* b 0x806c3f0c */ // 0x806C3DD8
    /* lis r3, 0 */ // 0x806C3DDC
    r3 = *(0 + r3); // lwz @ 0x806C3DE0
    r3 = *(0 + r3); // lwz @ 0x806C3DE4
    r0 = *(0 + r3); // lwz @ 0x806C3DE8
    if (<) goto 0x0x806c3dfc;
    if (<=) goto 0x0x806c3e08;
    if (==) goto 0x0x806c3e14;
    /* b 0x806c3e1c */ // 0x806C3E04
    /* li r0, 0x9f */ // 0x806C3E08
    *(0x2870 + r31) = r0; // stw @ 0x806C3E0C
    /* b 0x806c3e1c */ // 0x806C3E10
    /* li r0, -1 */ // 0x806C3E14
    *(0x2870 + r31) = r0; // stw @ 0x806C3E18
    /* lis r4, 0 */ // 0x806C3E1C
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x806C3E24
    /* li r4, 1 */ // 0x806C3E28
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806c3f0c */ // 0x806C3E30
    /* lis r3, 0 */ // 0x806C3E34
    r3 = *(0 + r3); // lwz @ 0x806C3E38
    r0 = *(0x30 + r3); // lwz @ 0x806C3E3C
    if (!=) goto 0x0x806c3f0c;
    r3 = *(0 + r3); // lwz @ 0x806C3E48
    r29 = *(0x28c + r3); // lwz @ 0x806C3E4C
    if (!=) goto 0x0x806c3e60;
    /* li r29, 0 */ // 0x806C3E58
    /* b 0x806c3eb4 */ // 0x806C3E5C
    /* lis r30, 0 */ // 0x806C3E60
    r30 = r30 + 0; // 0x806C3E64
    if (==) goto 0x0x806c3eb0;
    r12 = *(0 + r29); // lwz @ 0x806C3E6C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806C3E74
    /* mtctr r12 */ // 0x806C3E78
    /* bctrl  */ // 0x806C3E7C
    /* b 0x806c3e98 */ // 0x806C3E80
    if (!=) goto 0x0x806c3e94;
    /* li r0, 1 */ // 0x806C3E8C
    /* b 0x806c3ea4 */ // 0x806C3E90
    r3 = *(0 + r3); // lwz @ 0x806C3E94
    if (!=) goto 0x0x806c3e84;
    /* li r0, 0 */ // 0x806C3EA0
    if (==) goto 0x0x806c3eb0;
    /* b 0x806c3eb4 */ // 0x806C3EAC
    /* li r29, 0 */ // 0x806C3EB0
    r4 = r31 + 0x70; // 0x806C3EB8
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    r3 = r29 + 0x404; // 0x806C3EC0
    /* li r5, 0 */ // 0x806C3EC8
}