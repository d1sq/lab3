cmake_minimum_required(VERSION 3.17)
project(qt_first_lab)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets Charts)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 5)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Charts)

add_executable(${PROJECT_NAME} main.cpp functions/Function.h functions/Sin.cpp functions/Sin.h functions/Pow.cpp functions/Pow.h functions/LagrangePolynomial.cpp functions/LagrangePolynomial.h functions/Node.h functions/NodeSequence.h functions/Function.cpp functions/Node.cpp functions/NodeSequence.cpp functions/DistanceFunction.cpp functions/DistanceFunction.h gui/first/MainWindow.cpp gui/first/MainWindow.h algorithms/Algorithm.cpp algorithms/Algorithm.h algorithms/Derivative/DerivativeEstimateAlgorithm.cpp algorithms/Derivative/DerivativeEstimateAlgorithm.h algorithms/Derivative/RightDerivativeEstimateAlgorithm.cpp algorithms/Derivative/RightDerivativeEstimateAlgorithm.h algorithms/Derivative/BothSideDerivativeEstimateAlgorithm.cpp algorithms/Derivative/BothSideDerivativeEstimateAlgorithm.h gui/second/SecondMainWindow.cpp gui/second/SecondMainWindow.h algorithms/Derivative/SecondDerivativeAlgorithm.cpp algorithms/Derivative/SecondDerivativeAlgorithm.h algorithms/Derivative/DefIntegral.cpp algorithms/Integral/DefIntegral.h algorithms/Integral/DefIntegralByRect.cpp algorithms/Integral/DefIntegralByRect.h algorithms/Integral/DefIntegralByTrap.cpp algorithms/Integral/DefIntegralByTrap.h exceptions/NotImplemented.cpp exceptions/NotImplemented.h gui/third/ThirdMainWindow.cpp gui/third/ThirdMainWindow.h algorithms/RootFinder/IterableRootFinder.cpp algorithms/RootFinder/IterableRootFinder.h algorithms/RootFinder/DichotomyRootFinder.cpp algorithms/RootFinder/DichotomyRootFinder.h algorithms/RootFinder/NewtonRootFinder.cpp algorithms/RootFinder/NewtonRootFinder.h algorithms/RootFinder/SecantRootFinder.cpp algorithms/RootFinder/SecantRootFinder.h gui/fourth/FourthMainWindow.cpp gui/fourth/FourthMainWindow.h)


if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})
