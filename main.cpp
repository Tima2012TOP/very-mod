#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>

using namespace geode::prelude;

static std::string const VERITY_LEVEL_PLIST = 
    "<?xml version=\"1.0\"?>"
    "<plist version=\"1.0\" gjver=\"2.0\">"
    "<dict>"
    "<k>kCEK</k><i>4</i>"
    "<k>k1</k><i>149730885</i>"
    "<k>k18</k><i>510</i>"
    "<k>k36</k><i>8150</i>"
    "<k>k85</k><i>186</i>"
    "<k>k86</k><i>88</i>"
    "<k>k87</k><i>2511765</i>"
    "<k>k88</k><s>13,5,6,4,1,2,1,1,1,3,5,1,4,1,2,5</s>"
    "<k>k89</k><t />"
    "<k>k23</k><i>4</i>"
    "<k>k19</k><i>55</i>"
    "<k>k71</k><i>55</i>"
    "<k>k90</k><i>55</i>"
    "<k>k20</k><i>100</i>"
    "<k>k2</k><s>Verity in GD</s>"
    "<k>k5</k><s>o0o4484</s>"
    "<k>k95</k><i>38166</i>"
    "<k>k60</k><i>13770683</i>"
    "<k>k9</k><i>10</i>"
    "<k>k10</k><i>50</i>"
    "<k>k11</k><i>620988</i>"
    "<k>k22</k><i>36683</i>"
    "<k>k21</k><i>3</i>"
    "<k>k16</k><i>3</i>"
    "<k>k80</k><i>4904</i>"
    "<k>k83</k><i>117</i>"
    "<k>k45</k><i>1614510</i>"
    "<k>k50</k><i>47</i>"
    "<k>k48</k><i>57290</i>"
    "<k>k104</k><s>1614510</s>"
    "<k>k105</k><s>279,280,283,285,434,443,463,464,521,1043,1078,1243,1621,1674,1675,1676,1677,1679,1749,1751,1897,1899,1903,1907,1949,1950,2033,2642,2709,2887,2888,2889,2895,2896,2897,2900,2979,2980,3175,4273,5222,5946,7274,9804,10775,11248,11249,11250,12971,13215,13684,14075,14326,15951,16574,16588,16636,16763,18161,18709,19815,20186,20187,20762,20770,20916,20985,22492,22870,22871,22872,22873,22879,22881,23655,23937</s>"
    "<k>k106</k><i>9946185</i>"
    "<k>k66</k><i>10</i>"
    "</dict>"
    "</plist>";

class $modify(MyPlayLayer, PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontBypass) {
        if (level) {
            level->m_levelString = VERITY_LEVEL_PLIST;
            level->m_levelName = "Verity in GD";
        }
        return PlayLayer::init(level, useReplay, dontBypass);
    }
};

class $modify(MyLevelEditorLayer, LevelEditorLayer) {
    bool init(GJGameLevel* level, bool p1) {
        if (level) {
            level->m_levelString = VERITY_LEVEL_PLIST;
            level->m_levelName = "Verity in GD";
        }
        return LevelEditorLayer::init(level, p1);
    }
};