#pragma once

#include <map>

#include "Selector.h"

namespace selection {

    class GreedySelector : public Selector
    {
    public:
        GreedySelector() = default;

        inline void initialize(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        inline void updateProbabilitiesInternal(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        inline void updateProbabilitiesIteration(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        problem::ElementPtr selectElement(problem::Instance& instance, problem::SolutionPtr solution) override;
    };

    class RandomSelector : public Selector
    {
    private:
        double kValue;
        double alphaValue;
        std::uniform_int_distribution<int> distribution;
        std::default_random_engine generator;


    public:
        inline RandomSelector(double kValue, double alpha) : kValue(kValue), alphaValue(alpha), generator(std::default_random_engine()) {};

        inline void initialize(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        inline void updateProbabilitiesInternal(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        inline void updateProbabilitiesIteration(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        problem::ElementPtr selectElement(problem::Instance& instance, problem::SolutionPtr solution) override;
    };

    class WeightedRandomSelector : public Selector
    {
    private:
        std::uniform_real_distribution<double> distribution;
        std::default_random_engine generator;

    public:
        inline WeightedRandomSelector() : generator(std::default_random_engine()) {};

        inline void initialize(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        inline void updateProbabilitiesInternal(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        inline void updateProbabilitiesIteration(problem::Instance& instance, problem::SolutionPtr solution) override { /*Do nothing*/ };

        problem::ElementPtr selectElement(problem::Instance& instance, problem::SolutionPtr solution) override;
    };

};
