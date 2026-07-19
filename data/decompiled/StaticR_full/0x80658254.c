/* Function at 0x80658254, size=196 bytes */
/* Stack frame: 0 bytes */

int FUN_80658254(int r3, int r4, int r5)
{
    r0 = *(0x522c + r3); // lbz @ 0x80658254
    /* beqlr  */ // 0x8065825C
    r4 = *(0x5228 + r3); // lwz @ 0x80658260
    r0 = *(0x5224 + r3); // lwz @ 0x80658264
    /* mulli r4, r4, 0x1c */ // 0x80658268
    r5 = r3 + r4; // 0x80658270
    *(0x5064 + r5) = r0; // stw @ 0x80658274
    if (!=) goto 0x0x806582a4;
    /* lfs f0, 0x50(r3) */ // 0x8065827C
    /* stfs f0, 0x5070(r5) */ // 0x80658280
    /* lfs f1, 0x18(r3) */ // 0x80658284
    /* lfs f0, 0x50(r3) */ // 0x80658288
    /* fmuls f0, f1, f0 */ // 0x8065828C
    /* stfs f0, 0x5074(r5) */ // 0x80658290
    /* lfs f1, 0x1c(r3) */ // 0x80658294
    /* lfs f0, 0x50(r3) */ // 0x80658298
    /* fmuls f0, f1, f0 */ // 0x8065829C
    /* stfs f0, 0x5078(r5) */ // 0x806582A0
    /* lfs f0, 0x54(r3) */ // 0x806582A4
    /* stfs f0, 0x506c(r5) */ // 0x806582A8
    r4 = *(0x5228 + r3); // lwz @ 0x806582AC
    if (<=) goto 0x0x806582f0;
    r0 = r4 + -1; // 0x806582B8
    /* lfs f0, 0x5070(r5) */ // 0x806582BC
    /* mulli r0, r0, 0x1c */ // 0x806582C0
    r4 = r3 + r0; // 0x806582C4
    /* lfs f2, 0x5070(r4) */ // 0x806582C8
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x806582CC
    if (<=) goto 0x0x806582d8;
    /* b 0x806582dc */ // 0x806582D4
    /* fmr f2, f0 */ // 0x806582D8
    /* lfs f1, 0x48(r3) */ // 0x806582DC
    /* lfs f0, 0x58(r3) */ // 0x806582E0
    /* fmuls f1, f1, f2 */ // 0x806582E4
    /* fsubs f0, f0, f1 */ // 0x806582E8
    /* stfs f0, 0x58(r3) */ // 0x806582EC
    /* lfs f1, 0x58(r3) */ // 0x806582F0
    /* lfs f0, 0x5074(r5) */ // 0x806582F4
    /* fsubs f0, f1, f0 */ // 0x806582F8
    /* stfs f0, 0x58(r3) */ // 0x806582FC
    /* stfs f0, 0x5068(r5) */ // 0x80658300
    /* lfs f1, 0x58(r3) */ // 0x80658304
    /* lfs f0, 0x5078(r5) */ // 0x80658308
    /* fsubs f0, f1, f0 */ // 0x8065830C
    /* stfs f0, 0x58(r3) */ // 0x80658310
    return;
}